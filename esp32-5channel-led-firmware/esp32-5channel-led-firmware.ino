#include <uRTCLib.h>
#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <Preferences.h>
int board_id = 0;
String boardname;
String ssid;
String password;

#define WIFI_TIMEOUT 20000
bool wl_connected = false;

// LEDs channel setup:
#define LEDC_BASE_FREQ 5000 //LEDC base frequency
#define LEDC_TIMER 13 //bit precission for LEDC timer
uint8_t ledc_CHANNELS_USED = 5;
uint8_t CHANNELS_USED = 5;
uint8_t CHANNELS[] = {0, 1, 2, 3, 4};
uint8_t LEDC_CHANNEL[] = {0, 1, 2, 3, 4}; //Распределенеи каналов
uint8_t CHANNEL_PINS[] = {33, 32, 17, 18, 19};// PWM PINs
uint16_t CHANNEL_BRIGHTNESS[] = {8192, 8192, 8192, 8192, 8192};
uint16_t maxduty = 8192; // 8192 for 13 bit timer ( 2 ** LEDC_TIMER;) 

// TODO freertos structs
typedef struct Data_t
{
    uint8_t channel;
    uint32_t top_brightness;
};

struct Data_t chdata[5];

// FREERTOS handlers
TaskHandle_t wifi_handler = NULL;
TaskHandle_t handler1 = NULL;
TaskHandle_t handler2 = NULL;
TaskHandle_t handler3 = NULL;
TaskHandle_t handler4 = NULL;
TaskHandle_t handler5 = NULL;
TaskHandle_t handler6 = NULL;