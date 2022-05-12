#include <Preferences.h>
#include "uRTCLib.h"

#define LEDC_BASE_FREQ 5000 //LEDC base frequency
#define LEDC_TIMER 13 //bit precission for LEDC timer

uint8_t CHANNEL_PINS[] = {19, 18, 17, 32, 33};// PWM PINs
uint16_t maxduty = 8192; // 8192 for 13 bit timer ( 2 ** LEDC_TIMER;) 

int board_id;
String boardname;
String s_name;
String ssid;
String password;


void IledcWrite(uint8_t channel, uint16_t brightness){ 
    ledcWrite(channel, constrain(brightness, 0, maxduty));
}

void AllOff(){
  IledcWrite(0, 0);
  IledcWrite(1, 0);
  IledcWrite(2, 0);
  IledcWrite(3, 0);
  IledcWrite(4, 0);
}

void AllOn(){
  IledcWrite(0, maxduty);
  IledcWrite(1, maxduty);
  IledcWrite(2, maxduty);
  IledcWrite(3, maxduty);
  IledcWrite(4, maxduty);
}


void StripTest(){
  AllOff();
  
  delay(1000);
  IledcWrite(0, maxduty);
  delay(1000);
  IledcWrite(0, 0);
  
  delay(1000);
  IledcWrite(1, maxduty);
  delay(1000);
  IledcWrite(1, 0);
  
  delay(1000);
  IledcWrite(2, maxduty);
  delay(1000);
  IledcWrite(2, 0);
  
  delay(1000);
  IledcWrite(3, maxduty);
  delay(1000);
  IledcWrite(3, 0);
  
  delay(1000);
  IledcWrite(4, maxduty);
  delay(1000);
  IledcWrite(4, 0);
  
  AllOff();

}


void setup() {
  ledcSetup(0, LEDC_BASE_FREQ, LEDC_TIMER);
  ledcSetup(1, LEDC_BASE_FREQ, LEDC_TIMER);
  ledcSetup(2, LEDC_BASE_FREQ, LEDC_TIMER);
  ledcSetup(3, LEDC_BASE_FREQ, LEDC_TIMER);
  ledcSetup(4, LEDC_BASE_FREQ, LEDC_TIMER);
  ledcAttachPin(CHANNEL_PINS[0], 0);
  ledcAttachPin(CHANNEL_PINS[1], 1);
  ledcAttachPin(CHANNEL_PINS[2], 2);
  ledcAttachPin(CHANNEL_PINS[3], 3);
  ledcAttachPin(CHANNEL_PINS[4], 4);

  delay(1000);
  StripTest();
  delay(1000);
  AllOn();
  //do_settings();

  //Serial.begin(115200);
  //RTCsetup();
}

void loop() {
  //AllOn();
  //delay(3000);                       
  //AllOff();
  //delay(3000);
  //Serial.print("Read name = ");
  //Serial.println(boardname); 
  //PrintTime();
  delay(30000);
}
