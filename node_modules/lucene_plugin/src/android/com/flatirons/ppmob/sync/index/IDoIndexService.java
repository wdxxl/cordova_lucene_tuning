package com.flatirons.ppmob.sync.index;

import com.flatirons.ppmob.common.ICommonService;
import com.flatirons.ppmob.common.ServiceCategory;

import java.io.File;
import java.util.List;
import java.util.Map;


public interface IDoIndexService {
    public void process (File basicFilesPath, String indexPath, String extractPath, String folderName, List<String> indexSubPaths,
                         final Map<ServiceCategory, ICommonService> commonServices, final Map<String,String> fieldsConfigs,
                         final String status, String libraryId, String publicationId) throws Exception;
}
