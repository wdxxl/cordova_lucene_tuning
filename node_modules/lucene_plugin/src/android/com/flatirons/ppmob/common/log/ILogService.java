package com.flatirons.ppmob.common.log;

import com.flatirons.ppmob.common.ICommonService;
import com.flatirons.ppmob.common.ServiceCategory;

public interface ILogService extends ICommonService {

    public static ServiceCategory CATEGORY = ServiceCategory.LOG_SERVICE;

    public void log(String msg, Exception exception);

    public void log(String msg);

    public void log(Exception exception);

    public void error(String msg, Exception t);

    public void error(String msg);

    public void error(Exception t);
}
