#include <Preferences.h>
#include <TimeLib.h>
#include <Wire.h>
#include <DS1307RTC.h>
#include <EEPROM.h>
#include <WiFi.h>
#include <WebServer.h>
#include <ArduinoOTA.h>

#define LEDC_BASE_FREQ 5000 //LEDC base frequency
#define LEDC_TIMER 13 //bit precission for LEDC timer
#define RTCCHECKINTERVAL 3600 //timesync every hour
#define MAXDUTY 8192  // 8192 for 13 bit timer ( 2 ** LEDC_TIMER;) 
uint8_t CHANNEL_PINS[] = {19, 18, 17, 32, 33};// PWM PINs
String boardname = "GEOESP";


#define WIFI_TIMEOUT 20000
bool wl_connected = false;

typedef struct RGBCWWW {
  uint16_t r;
  uint16_t g;
  uint16_t b;
  uint16_t cw;
  uint16_t ww;
} RGBCWWW;

RGBCWWW TIMELINE[240];

typedef struct BoardCfg {
  uint8_t boardid;
  char SSID[6];
  char WFPWD[9];
} BoardCfg;


TaskHandle_t wifi_handler = NULL;
TaskHandle_t TimeWorker_handler = NULL;