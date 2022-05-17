
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


  Serial.begin(115200);
  //StripTest();
  //delay(1000);
  //AllOn();

  RTCsetup();
  do_settings();
  server_setup();           
  OTA_Setup();
  xTaskCreatePinnedToCore(TimeWorker, "Timeliner", 1024, NULL, 1, &TimeWorker_handler, 1);

  //Save_timeline();
}

void loop() {
 if(wl_connected == true){
    ArduinoOTA.handle();
    server.handleClient();
  }
}
