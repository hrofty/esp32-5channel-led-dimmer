void TimeWorker(void *pvParameters) {
    uint8_t pos;
    uint16_t p;
    uint8_t h;
    uint8_t d;
    uint8_t m;
    uint16_t s;
    uint16_t r;
    uint16_t g;
    uint16_t b;
    uint16_t cw; 
    uint16_t ww;
  for (;;){


    if (!SUPERSPEED){ //NORMASPEED 
      time_t t = now(); // Store the current time in time
   	  h = hour(t) * 10;
      d = minute(t) / 6;
   	  pos = h + d; //timeline position
      m = minute(t) % 6;
      s = m * 60;
      p = m * 60 + second(t); // seconds position 0-360
      cur_pos = pos;
      cur_sec = p;
    }
    else { //SUPERSPEED
      cur_sec = cur_sec+1;
      if (cur_sec >= 360){
       cur_sec = 0;
       cur_pos++;
      if (cur_pos >= 240){
        cur_pos = 0;
        }
      }
      pos = cur_pos;
      p = cur_sec;          
    } //END SUPERSPEED

    uint8_t npos = pos+1;  
     if (npos >= 240){
      npos = 0;
    }    
	  r  = map(p, 0, 359, TIMELINE[pos].r,  TIMELINE[npos].r);
	  g  = map(p, 0, 359, TIMELINE[pos].g,  TIMELINE[npos].g);
    b  = map(p, 0, 359, TIMELINE[pos].b,  TIMELINE[npos].b);
 	  cw = map(p, 0, 359, TIMELINE[pos].cw, TIMELINE[npos].cw); 
    ww = map(p, 0, 359, TIMELINE[pos].ww, TIMELINE[npos].ww);

    ledcWrite(0, r);
    ledcWrite(1, g);
    ledcWrite(2, b);
    ledcWrite(3, cw);
    ledcWrite(4, ww);

    if (debug){
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
    };

    if (!SUPERSPEED){
      vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    else {
      vTaskDelay(50 / portTICK_PERIOD_MS);
    };
  }
};
