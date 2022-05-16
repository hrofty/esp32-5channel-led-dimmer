
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

  //delay(1000);
  //StripTest();
  delay(1000);
  AllOn();
  do_settings();

  Serial.begin(115200);
  RTCsetup();
}

void loop() {
  //AllOn();
  //delay(3000);                       
  //AllOff();
  //delay(3000);
  Serial.print("Read name = ");
  Serial.println(boardname); 
  PrintTime();
  delay(3000);
}
