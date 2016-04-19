#ifndef __MQTT_CONFIG_H__
#define __MQTT_CONFIG_H__

#define CFG_HOLDER	0x00FF55A4	/* Change this value to load default configurations */
#define CFG_LOCATION	0xFC	/* Please don't change or if you know what you doing */
#define MQTT_SSL_ENABLE
#define GLOBAL_DEBUG_ON

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST			"192.168.0.164" //or "mqtt.yourdomain.com"
#define MQTT_PORT			1883
#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define MQTT_CLIENT_ID		"Shao_%08X"
#define MQTT_USER			"Shao_USER"
#define MQTT_PASS			"123456_PASS"

#define STA_SSID "Xiaomi-xd-WiFi"
#define STA_PASS "12345678"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/

#define DEFAULT_SECURITY	0
#define QUEUE_BUFFER_SIZE		 		2048

//#define PROTOCOL_NAMEv31	/*MQTT version 3.1 compatible with Mosquitto v0.15*/
#define PROTOCOL_NAMEv311			/*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/

#endif // __MQTT_CONFIG_H__
