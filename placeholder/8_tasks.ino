void TimeWorker(void *pvParameters) {
  for (;;){
    time_t t = now(); // Store the current time in time
 	  uint8_t h = hour(t) * 10;
    uint8_t d = minute(t) / 6;
 	  uint8_t pos = h + d; //timeline position
    uint8_t m = minute(t) % 6;
    uint16_t s = m * 60;
    uint16_t p = m * 60 + second(t); // seconds position 0-360
    uint8_t npos = pos+1;
    if (npos >= 240){
	   	npos = 0;
    }
	  uint16_t r  = map(p, 0, 360, TIMELINE[pos].r,  TIMELINE[npos].r);
	  uint16_t g  = map(p, 0, 360, TIMELINE[pos].g,  TIMELINE[npos].g);
    uint16_t b  = map(p, 0, 360, TIMELINE[pos].b,  TIMELINE[npos].b);
 	  uint16_t cw = map(p, 0, 360, TIMELINE[pos].cw, TIMELINE[npos].cw); 
    uint16_t ww = map(p, 0, 360, TIMELINE[pos].ww, TIMELINE[npos].ww);

    ledcWrite(0, r);
    ledcWrite(1, g);
    ledcWrite(2, b);
    ledcWrite(3, cw);
    ledcWrite(4, ww);

  Serial.print(" pos:");
 	Serial.print(pos);
	Serial.print(" npos:");
 	Serial.print(npos);
	Serial.print(" p:");
	Serial.println(p);
  Serial.print("r:");
 	Serial.print(r);
	Serial.print(" from:");
 	Serial.print(TIMELINE[pos].r);
	Serial.print(" to:");
	Serial.println(TIMELINE[npos].r);


    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
};