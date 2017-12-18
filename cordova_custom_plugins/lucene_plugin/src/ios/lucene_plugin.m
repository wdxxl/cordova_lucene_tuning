/********* lucene_plugin.m Cordova Plugin Implementation *******/

#import <Cordova/CDV.h>
#import "com/flatirons/ppmob/sync/index/impl/DoIndexServiceImpl.h"
#import "java/io/File.h"
#import "java/util/List.h"
#import "java/util/ArrayList.h"
#import "java/util/Map.h"
#import "java/util/HashMap.h"
#import "com/flatirons/ppmob/common/log/ILogService.h"
#import "com/flatirons/ppmob/common/log/impl/IOSLogServiceImpl.h"
#import "com/flatirons/ppmob/common/file/IFileService.h"
#import "com/flatirons/ppmob/common/file/impl/IOSFileServiceImpl.h"
#import "com/flatirons/ppmob/common/callback/ICallbackService.h"
#import "com/flatirons/ppmob/common/callback/impl/IOSCallbackServiceImpl.h"
#import "SSZipArchive.h"

@interface lucene_plugin : CDVPlugin {
  // Member variables go here.
}

- (void)coolMethod:(CDVInvokedUrlCommand*)command;
@end

@implementation lucene_plugin

- (void)coolMethod:(CDVInvokedUrlCommand*)command
{
    @autoreleasepool{
      CDVPluginResult* pluginResult = nil;
      NSString* echo = [command.arguments objectAtIndex:0];

      //FRMFIM Index Tunning
      ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *doServiceImpl = create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_init();

      JavaUtilHashMap *paramCommonServices = new_JavaUtilHashMap_init();
      JavaUtilArrayList *paramIndexSubPaths = new_JavaUtilArrayList_init();
      [paramIndexSubPaths addWithId:@"pinpoint_server"];
      [paramIndexSubPaths addWithId:@"pinpoint_server_frmfim"];
      JavaUtilHashMap *paramFieldsConfigs = new_JavaUtilHashMap_init();
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_group_id" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_product_ids" withId:@"type:text_general;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_msg_ref_title" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_system_position" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_fault_code" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_category" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_msg_ref" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_sub_system" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_type" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_msg_text" withId:@"type:text_general_html;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_fault_type" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_data_fin_type" withId:@"type:text_hyphn;indexed:true;stored:true;multiValued:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_library_id" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_publication_desc" withId:@"type:text_general;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_sys" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_fault_descriptions_str" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code6" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.id" withId:@"type:string;indexed:true;stored:true;required:true;multiValued:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.id" withId:@"type:string;indexed:true;stored:true;required:true;multiValued:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code7" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code4" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_fault_type" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_sub_category" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_system_name" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_data_type" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code11" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code5" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code12" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_equip" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_product_ids" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_revision_num" withId:@"type:text_general;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_fault_group_id" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code3" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_publication_id" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_msg_number" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_cond" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code10" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_fin_string" withId:@"type:text_general_fin;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_filter" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_title" withId:@"type:text_general;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_message_indication" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_warning_type" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_product_ids" withId:@"type:text_general;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_view_location" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_system_location" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_pointer" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code9" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_fault_refs" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_html" withId:@"type:text_general_html;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code8" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.id" withId:@"type:string;indexed:true;stored:true;required:true;multiValued:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_class" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_system_ident" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code" withId:@"type:text_general;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_supplement_pdf_type" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_publication_id" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_library_id" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_fault_message_description_str" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_msg_ref_anchor" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code2" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_library_id" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_publication_id" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_fault_descriptions" withId:@"type:text_general_html_without_replace_filter;indexed:true;stored:true;multiValued:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_frmfim.pps_frmfim_msg_ref_key" withId:@"type:string;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_document_code1" withId:@"type:text_general_keyword;indexed:true;stored:false"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_message" withId:@"type:text_general_html;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_publication_title" withId:@"type:text_general;indexed:false;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_source" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server.pps_publication_type" withId:@"type:text_general_keyword;indexed:true;stored:true"];
      [paramFieldsConfigs putWithId:@"index.field.pinpoint_server_tsm.pps_tsm_code" withId:@"type:text_general_keyword;indexed:true;stored:true"];

      //Documents in App Sandbox
      NSString *_basicFilesPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex: 0];

      JavaIoFile *paramBasicFilesPath = new_JavaIoFile_initWithNSString_(_basicFilesPath);


      NSString *_indexPath = @"flatirons/index";
      NSString *_zipPath;
      NSString *_extractPath;

      NSString *appFolderPath = [[NSBundle mainBundle] resourcePath];
      NSFileManager *fileManager = [NSFileManager defaultManager];
      NSString *appPath = [appFolderPath stringByAppendingPathComponent:@"www/extract/"];
      NSArray *unsortedDDLPath = [fileManager contentsOfDirectoryAtPath:appPath error:nil];
      NSArray *sortedStrings =[unsortedDDLPath sortedArrayUsingSelector:@selector(compare:)];
      for(id obj in sortedStrings) {
          NSString *fullObj = [appPath stringByAppendingPathComponent:obj];
          NSLog(@"FullPath = %@", fullObj);
          _zipPath = fullObj;
      }

      NSString *documentPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex: 0];
      NSString *_unzipPath = [documentPath stringByAppendingPathComponent:@"flatirons/extract/96d361f0-bbb7-48cd-bea4-949e881ee3fd_Offline_frmfim_1129_1"];
      //unzip it into _extractPath
      NSError *errorUnzip;
      if ([SSZipArchive unzipFileAtPath:_zipPath toDestination:_unzipPath overwrite:YES password:nil error:&errorUnzip delegate:nil]) {
          NSLog(@"Extracting Unzip Path = %@",_unzipPath);
      }else {
      }
      _extractPath = @"flatirons/extract/";


      NSString *_folderName = @"96d361f0-bbb7-48cd-bea4-949e881ee3fd_Offline_frmfim_1129_1";

      // TODO paramCommonServices
      ComFlatironsPpmobCommonLogImplIOSLogServiceImpl *iLogServiceImpl = create_ComFlatironsPpmobCommonLogImplIOSLogServiceImpl_init();
      [iLogServiceImpl logWithNSString:nil];
      ComFlatironsPpmobCommonFileImplIOSFileServiceImpl *iFileServiceImpl = create_ComFlatironsPpmobCommonFileImplIOSFileServiceImpl_init();
      ComFlatironsPpmobCommonCallbackImplIOSCallbackServiceImpl *iCallbackServiceImpl = create_ComFlatironsPpmobCommonCallbackImplIOSCallbackServiceImpl_init();
      iCallbackServiceImpl.tableId = @"_tableId";
      iCallbackServiceImpl.libId = @"_libId";
      iCallbackServiceImpl.pubId = @"_pubId";
      iCallbackServiceImpl.revNbr = @"_revNbr";
      iCallbackServiceImpl.pubTitle = @"_pubTitle";
      iCallbackServiceImpl.callbackBlockFailed = ^(FISOperationCallbackModel *successModel) {
          NSLog(@"_blockFailed");
      };
      iCallbackServiceImpl.callbackBlockSuccess = ^(FISOperationCallbackModel *successModel) {
          NSLog(@"_blockSuccess");
      };

      [paramCommonServices putWithId:ComFlatironsPpmobCommonLogILogService_get_CATEGORY()  withId:iLogServiceImpl];
      [paramCommonServices putWithId:ComFlatironsPpmobCommonFileIFileService_get_CATEGORY() withId:iFileServiceImpl];
      [paramCommonServices putWithId:ComFlatironsPpmobCommonCallbackICallbackService_get_CATEGORY() withId:iCallbackServiceImpl];


      @try {
          @autoreleasepool {
              [doServiceImpl processWithJavaIoFile:paramBasicFilesPath
                                      withNSString:_indexPath
                                      withNSString:_extractPath
                                      withNSString:_folderName
                                  withJavaUtilList:paramIndexSubPaths
                                   withJavaUtilMap:paramCommonServices
                                   withJavaUtilMap:paramFieldsConfigs
                                      withNSString:@"0800"
                                      withNSString:@"_libId"
                                      withNSString:@"_pubId"];
          }

      } @catch (NSException *exception) {
          NSLog(@"Something Wrong with Java Lucene 350.");
      } @finally {
          NSLog(@"Finally...");
      }

      if (echo != nil && [echo length] > 0) {
          pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK messageAsString:echo];
      } else {
          pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_ERROR];
      }

      [self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
    }
}

@end
