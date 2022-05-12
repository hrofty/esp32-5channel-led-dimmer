void print_settings(){
  Serial.begin(115200);
  delay(1000);
  Serial.print("Board Id = ");
  Serial.println(board_id); 
  
  Serial.print("Read name = ");
  Serial.println(boardname); 
  
  Serial.print("Channels Used = ");
  Serial.println(CHANNELS_USED); 

  Serial.print("max duty = ");
  Serial.println(maxduty); 
 
}

void setup() {
  do_settings();
  OTA_Setup();
  channel_config();
  rtc_setup();
  
  //print_settings(); //debug
  randomSeed(analogRead(0));
  
  pinMode(LED_BUILTIN, OUTPUT);
  for (byte c = 0; c < ledc_CHANNELS_USED; c = c + 1) {
    ledcSetup(c, LEDC_BASE_FREQ, LEDC_TIMER);
    xTaskCreatePinnedToCore(effects[c], "", 1024, (void*)&CHANNELS[c], 1, &handlers[c], 1);
  }
    for (byte c = 0; c < CHANNELS_USED; c = c + 1) {
    ledcAttachPin(CHANNEL_PINS[c], LEDC_CHANNEL[c]);
  }

  
}


void loop() {
 if(wl_connected == true){
    ArduinoOTA.handle();
  }
  rtc_loop();
}



