package com.flatirons.ppmob.common.file;

import com.flatirons.ppmob.common.ICommonService;
import com.flatirons.ppmob.common.ServiceCategory;

import java.io.File;
import java.io.IOException;

public interface IFileService extends ICommonService {

    public static ServiceCategory CATEGORY = ServiceCategory.FILE_SERVICE;

    public String getFileContent(String filePath) throws IOException;

    public String getFileContent(File file) throws  IOException;
}
