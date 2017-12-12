package com.flatirons.ppmob.common.callback;

import com.flatirons.ppmob.common.ICommonService;
import com.flatirons.ppmob.common.ServiceCategory;


public interface ICallbackService extends ICommonService {

    public static ServiceCategory CATEGORY = ServiceCategory.CALLBACK_SERVICE;

    public void processOKCallback(String status, String message, long percentage);

    public void processERRORCallback(String status, String message, long percentage, Exception e);
}
