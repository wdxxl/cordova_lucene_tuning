package com.flatirons.ppmob.sync.index.impl;

import com.flatirons.ppmob.common.ICommonService;
import com.flatirons.ppmob.common.ServiceCategory;
import com.flatirons.ppmob.common.callback.ICallbackService;
import com.flatirons.ppmob.common.file.IFileService;
import com.flatirons.ppmob.common.log.ILogService;
import com.flatirons.ppmob.sync.index.IDoIndexService;
import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

import org.apache.lucene.analysis.Analyzer;
import org.apache.lucene.analysis.KeywordAnalyzer;
import org.apache.lucene.analysis.KeywordTokenizer;
import org.apache.lucene.analysis.LowerCaseFilter;
import org.apache.lucene.analysis.PerFieldAnalyzerWrapper;
import org.apache.lucene.analysis.TokenFilter;
import org.apache.lucene.analysis.TokenStream;
import org.apache.lucene.analysis.WhitespaceTokenizer;
import org.apache.lucene.analysis.standard.StandardAnalyzer;
import org.apache.lucene.analysis.standard.StandardTokenizer;
import org.apache.lucene.analysis.tokenattributes.CharTermAttribute;
import org.apache.lucene.document.Document;
import org.apache.lucene.document.Field;
import org.apache.lucene.index.IndexWriter;
import org.apache.lucene.index.IndexWriterConfig;
import org.apache.lucene.index.IndexWriterConfig.OpenMode;
import org.apache.lucene.index.Term;
import org.apache.lucene.search.BooleanClause.Occur;
import org.apache.lucene.search.BooleanQuery;
import org.apache.lucene.search.TermQuery;
import org.apache.lucene.store.Directory;
import org.apache.lucene.store.FSDirectory;
import org.apache.lucene.util.Version;

import java.io.File;
import java.io.IOException;
import java.io.Reader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * Created by npeng on 6/15/2017.
 */

public class DoIndexServiceImpl implements IDoIndexService {

    final int size = 100;
    private ILogService logService;
    private IFileService fileService;
    private ICallbackService callbackService;
    private File basicFilesPath;
    private String indexPath;
    private List<String> indexSubPaths;
    private String status;
    private Map<String, String> fieldsConfigs;
    private String unzipIndexPath;
    private String folderName;
    private String libraryId;
    private String publicationId;
    final private Analyzer keywordAnalyzer = new KeywordAnalyzer();
    final private Analyzer FTS_TextGeneral_Analyzer = new FTS_TextGeneral_Analyzer();
    final private Analyzer FTS_TextGeneralKeyword_Analyzer = new FTS_TextGeneralKeyword_Analyzer();
    final private Analyzer FTS_TextGeneralHTML_Analyzer = new FTS_TextGeneralHTML_Analyzer();
    final private Analyzer FTS_TextGeneralFIN_Analyzer = new FTS_TextGeneralFIN_Analyzer();
    final private Analyzer FTS_TextHyphn_Analyzer = new FTS_TextHyphn_Analyzer();
    final private Analyzer FF_TextGeneralHTML_Analyzer = new FF_TextGeneralHTML_Analyzer();


    @Override
    public void process(File basicFilesPath, String indexPath, String extractPath, String folderName, List<String> indexSubPaths,
                        final Map<ServiceCategory, ICommonService> commonServices, final Map<String, String> fieldsConfigs,
                        final String status, String libraryId, String publicationId) throws Exception {
        if (commonServices != null && !commonServices.isEmpty()) {
            // init basic info
            this.logService = (ILogService) commonServices.get(ILogService.CATEGORY);
            this.fileService = (IFileService) commonServices.get(IFileService.CATEGORY);
            this.callbackService = (ICallbackService) commonServices.get(ICallbackService.CATEGORY);
            this.basicFilesPath = basicFilesPath;
            this.indexPath = basicFilesPath.getAbsolutePath() + File.separator + indexPath;
            this.indexSubPaths = indexSubPaths;
            this.fieldsConfigs = fieldsConfigs;
            this.unzipIndexPath = basicFilesPath.getAbsolutePath() + File.separator + extractPath + File.separator + folderName;
            this.folderName = folderName;
            this.status = status;
            this.libraryId = libraryId;
            this.publicationId = publicationId;
            this.validateBasicInfo();
            this.processAllFolders();
        } else {
            throw new Exception("Common Service list shouldn't be empty.");
        }
    }

    private void validateBasicInfo() throws Exception {
        if (this.logService == null || this.callbackService == null || this.fileService == null) {
            throw new Exception("Failed to init each services. LogService: " + this.logService
                    + ", FileService: " + this.fileService + ", CallbackService: " + this.callbackService);
        } else if (this.basicFilesPath == null || this.indexPath == null || this.indexSubPaths == null || this.unzipIndexPath == null) {
            throw new Exception("Failed to init each paths. BasicFilesPath: " + this.basicFilesPath + ", IndexPath: " + this.indexPath
                    + ", IndexSubPaths: " + this.indexSubPaths + ", UnzipIndexPath" + this.unzipIndexPath);
        } else if (this.fieldsConfigs == null || this.fieldsConfigs.isEmpty()) {
            throw new Exception("There is no fields configuration in property.");
        } else if (this.status == null || "".equals(status.trim())) {
            throw new Exception("The status code " + this.status + " is incorrect.");
        }
    }

    private void processAllFolders() throws Exception {
        try {
            logService.log(this.folderName + " -- Start creating index...");
            for (String subPath : this.indexSubPaths) {
                final List<File> originalIndexFiles = this.getOriginalIndexFiles(subPath);
                logService.log(this.folderName + " -- Start creating index for path: " + subPath + ", total index files: " + originalIndexFiles.size());
                this.processEachFolder(subPath, originalIndexFiles);
            }
            logService.log(this.folderName + " -- Finish creating index...");
        } finally {

        }
    }

    private List<File> getOriginalIndexFiles(String subPath) {
        final File subFolder = new File(this.unzipIndexPath + File.separator + "index" + File.separator + subPath);
        final List<File> returnList = new ArrayList<File>();
        if (subFolder.isDirectory() && subFolder.exists()) {
            final File[] allFiles = subFolder.listFiles();
            if (allFiles != null) {
                for (File file : allFiles) {
                    if (file.isFile()) {
                        returnList.add(file);
                    }
                }
            }
            Collections.sort(returnList, new Comparator<File>() {
                @Override
                public int compare(File o1, File o2) {
                    return o2.getName().compareTo(o1.getName());
                }
            });
        }
        return returnList;
    }

    private void processEachFolder(String subPath, List<File> originalIndexFiles) throws Exception {
        Directory directory = null;
        IndexWriter writer = null;
        try {
            final File dir = new File(this.indexPath + File.separator + subPath);
            directory = FSDirectory.open(dir);
            final PerFieldAnalyzerWrapper analyzer = this.getPerFieldAnalyzerWrapper(subPath);
            // Create IndexWriter
            IndexWriterConfig iwc = new IndexWriterConfig(Version.LUCENE_35, analyzer);
            iwc.setMaxBufferedDocs(5000);
            iwc.setOpenMode(OpenMode.CREATE_OR_APPEND);
            writer = new IndexWriter(directory, iwc);
            if( subPath.equalsIgnoreCase("pinpoint_server") ) {
                this.deleteDocumentByQuery(writer);
            }
            this.createIndex(originalIndexFiles, writer, subPath);
        } finally {
            logService.log("Start optimizing index... ");
            long startTime = new Date().getTime();
            writer.optimize();
            logService.log("Finish optimizing index... Cost time: " + (new Date().getTime() - startTime));
            writer.close();
            directory.close();
        }
    }

    private void createIndex(List<File> originalIndexFiles, IndexWriter writer, String subPath) throws Exception {
        int currentNumber = 0;
        long totalIndexTime = 0;
        final int totalIndexFiles = originalIndexFiles.size();
        Document doc = null;
        for (File indexFile : originalIndexFiles) {
            if (indexFile.exists() && indexFile.isFile()) {
                try {
                    long startTime = new Date().getTime();
                    this.buildDocument(writer, subPath, indexFile);
                    totalIndexTime += (new Date().getTime() - startTime);
                    currentNumber++;
                    if (currentNumber >= size && currentNumber % size == 0 || currentNumber >= totalIndexFiles) {
                        logService.log(this.folderName + " -- Create " + currentNumber + " index successfully. Cost time: " + totalIndexTime + "ms.");
                        this.callbackService.processOKCallback(this.status, "Do Indexing...", (currentNumber * 100) / totalIndexFiles);
                        startTime = 0;
                        totalIndexTime = 0;
                    }
                } catch (Exception e) {
                    logService.log("There is something wrong during crate index.", e);
                    throw e;
                }
            } else {
                Exception e = new Exception("There is no index file for path:" + indexFile.getAbsolutePath());
                logService.log(e);
                throw e;
            }
        }
    }

    private void buildDocument(IndexWriter writer, String subPath, File indexFile) throws Exception {
        String jsonFromFile = "";
        String key = "";
        try {
            Document doc;
            doc = new Document();
            jsonFromFile = fileService.getFileContent(indexFile);
            JsonObject jsonObj = new JsonParser().parse(jsonFromFile).getAsJsonObject();
            key = this.buildDocument(subPath, doc, jsonObj);
            writer.updateDocument(new Term("id", doc.get("id")),doc);
        } catch (Exception e) {
            logService.log("There is something wrong during build document. Path: " + indexFile.getAbsolutePath() + ", Key: " + key);
            logService.log("JSON String: " + jsonFromFile);
            throw e;
        }
    }

    private void deleteDocumentByQuery(IndexWriter writer) throws IOException {
        BooleanQuery query = new BooleanQuery();
        query.add(new TermQuery(new Term("pps_library_id", this.libraryId)), Occur.MUST);
        query.add(new TermQuery(new Term("pps_publication_id", this.publicationId)), Occur.MUST);
        writer.deleteDocuments(query);
        logService.log("Delete Document with libraryId: "+ this.libraryId +" and publicationId: " + this.publicationId);
    }

    private String buildDocument(String subPath, Document doc, JsonObject jsonObj) {
        String configValue = "";
        JsonElement value = null;
        String key = "";
        for (Map.Entry<String, JsonElement> entry : jsonObj.entrySet()) {
            key = entry.getKey();
            configValue = this.fieldsConfigs.get("index.field." + subPath + "." + key);
            value = jsonObj.get(key);
            if (value != null) {
                final boolean stored = Boolean.parseBoolean(this.getSplitValue(configValue, "stored"));
                final boolean indexed = Boolean.parseBoolean(this.getSplitValue(configValue, "indexed"));
                if (value instanceof JsonArray) {
                    JsonArray array = (JsonArray) value;
                    for (JsonElement jsonElement : array) {
                        doc.add(new Field(key, jsonElement.getAsString(), stored ? Field.Store.YES : Field.Store.NO,
                                indexed ? Field.Index.ANALYZED : Field.Index.NO, indexed ? Field.TermVector.YES : Field.TermVector.NO));
                    }
                    array = null;
                } else {
                    doc.add(new Field(key, value.getAsString(), stored ? Field.Store.YES : Field.Store.NO,
                            indexed ? Field.Index.ANALYZED : Field.Index.NO, indexed ? Field.TermVector.YES : Field.TermVector.NO));
                }
            }
        }
        return key;
    }

    private PerFieldAnalyzerWrapper getPerFieldAnalyzerWrapper(String subPath) {
        final String preName = "index.field." + subPath + ".";
        final Map<String, Analyzer> analyzerPerField = new HashMap<String, Analyzer>();
        for (Map.Entry<String, String> entry : this.fieldsConfigs.entrySet()) {
            if (entry.getKey().indexOf(preName) == 0
                    && Boolean.parseBoolean(this.getSplitValue(entry.getValue(), "indexed"))) {
                final String type = this.getSplitValue(entry.getValue(), "type");
                analyzerPerField.put(entry.getKey().replace(preName, ""), this.getAnalyzer(type));
            }
        }
        final PerFieldAnalyzerWrapper analyzer = new PerFieldAnalyzerWrapper(
                new StandardAnalyzer(Version.LUCENE_35), analyzerPerField);
        return analyzer;
    }

    private String getSplitValue(String multipleValues, String key) {
        if (multipleValues != null && !"".equals(multipleValues.trim()) && key != null && !"".equals(key.trim())) {
            final String[] subValues = multipleValues.split(";");
            if (subValues != null && subValues.length > 0) {
                String[] subSubValues = null;
                for (String subValue : subValues) {
                    subSubValues = subValue.split(":");
                    if (key.equalsIgnoreCase(subSubValues[0])) {
                        return subSubValues[1];
                    }
                }
            }
        }
        return "";
    }

    private Analyzer getAnalyzer(String type) {
        Analyzer analyzer = null;
        if ("string".equalsIgnoreCase(type)) {
            analyzer = this.keywordAnalyzer;
        } else if ("text_general".equalsIgnoreCase(type)) {
            analyzer = this.FTS_TextGeneral_Analyzer;
        } else if ("text_general_keyword".equalsIgnoreCase(type)) {
            analyzer = FTS_TextGeneralKeyword_Analyzer;
        } else if ("text_general_html".equalsIgnoreCase(type)) {
            analyzer = FTS_TextGeneralHTML_Analyzer;
        } else if ("text_general_html_without_replace_filter".equalsIgnoreCase(type)) {
            analyzer = FF_TextGeneralHTML_Analyzer;
        }else if ("text_general_fin".equalsIgnoreCase(type)) {
            analyzer = FTS_TextGeneralFIN_Analyzer;
        } else if ("text_hyphn".equalsIgnoreCase(type)) {
            analyzer = FTS_TextHyphn_Analyzer;
        }
        return analyzer;
    }

    class FTS_TextGeneral_Analyzer extends Analyzer {
        @Override
        public TokenStream tokenStream(String s, Reader reader) {
            final StandardTokenizer tokenizer = new StandardTokenizer(Version.LUCENE_35, reader);
            TokenStream tokenStream = new LowerCaseFilter(Version.LUCENE_35, tokenizer);
            return tokenStream;
        }
    }

    class FTS_TextGeneralHTML_Analyzer extends Analyzer {
        @Override
        public TokenStream tokenStream(String s, Reader reader) {
            final WhitespaceTokenizer tokenizer = new WhitespaceTokenizer(Version.LUCENE_35, reader);
            TokenStream tokenStream = new FISPatternReplaceFilter(tokenizer, Pattern.compile("[\\p{Punct}]"), "", true);
            tokenStream = new LowerCaseFilter(Version.LUCENE_35, tokenizer);
            return tokenStream;
        }
    }

    class FF_TextGeneralHTML_Analyzer extends Analyzer {
        @Override
        public TokenStream tokenStream(String s, Reader reader) {
            final KeywordTokenizer tokenizer = new KeywordTokenizer(reader);
            TokenStream tokenStream = new LowerCaseFilter(Version.LUCENE_35, tokenizer);
            return tokenStream;
        }
    }

    class FTS_TextGeneralFIN_Analyzer extends Analyzer {
        @Override
        public TokenStream tokenStream(String s, Reader reader) {
            final WhitespaceTokenizer tokenizer = new WhitespaceTokenizer(Version.LUCENE_35, reader);
            TokenStream tokenStream = new FISPatternReplaceFilter(tokenizer, Pattern.compile("\\|.*\\|"), "", true);
            tokenStream = new FISPatternReplaceFilter(tokenizer, Pattern.compile("[\\p{Punct}]"), "", true);
            tokenStream = new LowerCaseFilter(Version.LUCENE_35, tokenizer);
            return tokenStream;
        }
    }

    class FTS_TextGeneralKeyword_Analyzer extends Analyzer {
        @Override
        public TokenStream tokenStream(String s, Reader reader) {
            final KeywordTokenizer tokenizer = new KeywordTokenizer(reader);
            TokenStream tokenStream = new LowerCaseFilter(Version.LUCENE_35, tokenizer);
            return tokenStream;
        }
    }

    class FTS_TextHyphn_Analyzer extends Analyzer {
        @Override
        public TokenStream tokenStream(String s, Reader reader) {
            final KeywordTokenizer tokenizer = new KeywordTokenizer(reader);
            TokenStream tokenStream = new LowerCaseFilter(Version.LUCENE_35, tokenizer);
            tokenStream = new FISPatternReplaceFilter(tokenizer, Pattern.compile("-"), "", true);
            tokenStream = new FISPatternReplaceFilter(tokenizer, Pattern.compile("_"), "", true);
            return tokenStream;
        }
    }

    class FISPatternReplaceFilter extends TokenFilter {
        private final String replacement;
        private final boolean all;
        private final CharTermAttribute termAtt = addAttribute(CharTermAttribute.class);
        private final Matcher m;

        public FISPatternReplaceFilter(TokenStream in, Pattern p, String replacement, boolean all) {
            super(in);
            this.replacement = (null == replacement) ? "" : replacement;
            this.all = all;
            this.m = p.matcher(termAtt);
        }

        @Override
        public boolean incrementToken() throws IOException {
            if (!input.incrementToken())
                return false;
            m.reset();
            if (m.find()) {
                // replaceAll/replaceFirst will reset() this previous find.
                String transformed = all ? m.replaceAll(replacement) : m.replaceFirst(replacement);
                termAtt.setEmpty().append(transformed);
            }

            return true;
        }

    }
}
