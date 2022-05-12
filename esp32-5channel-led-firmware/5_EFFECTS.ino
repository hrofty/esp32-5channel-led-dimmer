void IledcWrite(uint8_t channel, uint16_t brightness){ 
    ledcWrite(channel, constrain(brightness, 0, maxduty));
    //ledcWrite(channel, brightness);
  }


void EffectConstant(void *pvParameters) {
  uint8_t channel = *((uint8_t *) pvParameters);
  uint16_t global_brightness = CHANNEL_BRIGHTNESS[channel];
  
  for (;;){
    IledcWrite(channel, global_brightness);
    vTaskDelay(10000 / portTICK_PERIOD_MS);
    vTaskDelete( NULL );
  }
};

void EffectOff(void *pvParameters) {
  uint8_t channel = *((uint8_t *) pvParameters);
  uint16_t global_brightness = CHANNEL_BRIGHTNESS[channel];
  
  for (;;){
    IledcWrite(channel, 0);
    vTaskDelay(10000 / portTICK_PERIOD_MS);
    vTaskDelete( NULL );
  }
};
