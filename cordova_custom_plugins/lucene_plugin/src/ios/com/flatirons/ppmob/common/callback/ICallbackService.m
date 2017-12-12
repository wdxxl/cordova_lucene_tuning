//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:offline-index-1.0.jar!com/flatirons/ppmob/common/callback/ICallbackService.java
//

#include "J2ObjC_source.h"
#include "com/flatirons/ppmob/common/ServiceCategory.h"
#include "com/flatirons/ppmob/common/callback/ICallbackService.h"

J2OBJC_INITIALIZED_DEFN(ComFlatironsPpmobCommonCallbackICallbackService)

ComFlatironsPpmobCommonServiceCategory *ComFlatironsPpmobCommonCallbackICallbackService_CATEGORY;

@implementation ComFlatironsPpmobCommonCallbackICallbackService

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "V", 0x401, 0, 1, -1, -1, -1, -1 },
    { NULL, "V", 0x401, 2, 3, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(processOKCallbackWithNSString:withNSString:withLong:);
  methods[1].selector = @selector(processERRORCallbackWithNSString:withNSString:withLong:withJavaLangException:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "CATEGORY", "LComFlatironsPpmobCommonServiceCategory;", .constantValue.asLong = 0, 0x19, -1, 4, -1, -1 },
  };
  static const void *ptrTable[] = { "processOKCallback", "LNSString;LNSString;J", "processERRORCallback", "LNSString;LNSString;JLJavaLangException;", &ComFlatironsPpmobCommonCallbackICallbackService_CATEGORY };
  static const J2ObjcClassInfo _ComFlatironsPpmobCommonCallbackICallbackService = { "ICallbackService", "com.flatirons.ppmob.common.callback", ptrTable, methods, fields, 7, 0x609, 2, 1, -1, -1, -1, -1, -1 };
  return &_ComFlatironsPpmobCommonCallbackICallbackService;
}

+ (void)initialize {
  if (self == [ComFlatironsPpmobCommonCallbackICallbackService class]) {
    ComFlatironsPpmobCommonCallbackICallbackService_CATEGORY = JreLoadEnum(ComFlatironsPpmobCommonServiceCategory, CALLBACK_SERVICE);
    J2OBJC_SET_INITIALIZED(ComFlatironsPpmobCommonCallbackICallbackService)
  }
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(ComFlatironsPpmobCommonCallbackICallbackService)
