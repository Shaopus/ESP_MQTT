# ESP_MQTT
## 来源 ##
This is MQTT client for ESP8266, port from: [MQTT client library for ESP8266 Soc](https://github.com/tuanpmt/esp_mqtt) (thanks)

## 变化 ##
- 将程序移植到NOOS-SDK1.5.2
- 修改了文件夹结构(改变MakeFile)
- 使用了自己建立的MQTT服务器([EMQTT](http://emqtt.com/))
- 使用了新的烧录地址(4096K 1024+1024)

## 移植 ##


1. 下载最新的[NOOS-SDK1.5.2](http://bbs.espressif.com/viewtopic.php?f=46&t=2041)
2. 将文件夹modules和mqtt移植到app目录下，再将example中IoT_Memo中的文件夹移植到app目录下
3. 删除include目录下各种usre_xx.h文件，将esp_mqtt中的mqtt_config和usre_config.h移植到include目录下
4. 删除user目录下的全部文件，将esp_mqtt中的usre_main.c移植该目录下
5. 移植uart.c到driver，移植uart.h和uart_register.h到include/driver目录下

## MakeFile ##

改变app目录下的MakeFile文件，改变如下，主要两处改变

    ifndef PDIR # {
    GEN_IMAGES= eagle.app.v6.out
    GEN_BINS= eagle.app.v6.bin
    SPECIAL_MKTARGETS=$(APP_MKTARGETS)
    SUBDIRS=\
    	user\
    	driver \
    	modules \
    	mqtt 
    
    endif # } PDIR

    COMPONENTS_eagle.app.v6 = \
    	userbuser.a  \
    	driverbdriver.a	\
    	modulesbmqtt.a	\
    	mqttbmqtt.a

改变user_main中include引用H文件接口，如#include "../mqtt/include/mqtt.h"

## MQTT服务器 ##
使用EMQTT中Windows版本服务器，部署详细介绍如下[安装](http://emqtt.com/docs/install.html)

## 编译 ##

使用./gen_misc.sh,使用步骤如下：

1. 第一步：1(new boot)
2. 第二步：1(user1)
3. 第三步：2(40Mhz)
4. 第四步：2(DIO)
5. 第五步：6(1024+1024)
