
```
cordova create cordova_lucene_tunning com.wdxxl.cordova.lucene.tunning
cd cordova_lucene_tunning
git init
```

```
mkdir cordova_custom_plugins
cd cordova_custom_plugins/
plugman create -name lucene_plugin --plugin_id com.wdxxl.plugin.lucene --plugin_version 1.0.0
plugman platform add -platform_name ios
plugman platform add -platform_name android
sudo plugman createpackagejson ../lucene_plugin/
```

```
cordova platform rm ios

cordova plugin rm com.wdxxl.plugin.lucene
cordova plugin rm cordova-custom-config

cordova plugin add cordova_custom_plugins/lucene_plugin/
cordova plugin add cordova_custom_plugins/cordova-custom-config/

cordova platform add ios
```
