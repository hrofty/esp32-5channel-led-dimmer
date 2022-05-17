

void Save_timeline(){
    EEPROM.begin(2500);
    EEPROM.put(50, TIMELINE);
    EEPROM.commit();
    EEPROM.end();
    Serial.println("Timeline Saved");
  }

void timeline_updater(uint8_t newpos, 
                      uint16_t new_r,  
                      uint16_t new_g,  
                      uint16_t new_b,  
                      uint16_t new_cw,  
                      uint16_t new_ww){
  TIMELINE[newpos] = (RGBCWWW) {new_r, new_g, new_b, new_cw, new_ww};
}

void printtimeline(uint8_t i) {
Serial.print("TIMELINE:");
Serial.print(i);
Serial.print(" R:");
Serial.print(TIMELINE[i].r);
Serial.print(" G:");
Serial.print(TIMELINE[i].g);
Serial.print(" B:");
Serial.print(TIMELINE[i].b);
Serial.print(" CW:");
Serial.print(TIMELINE[i].b);
Serial.print(" WW:");
Serial.println(TIMELINE[i].b);
}

uint8_t CurrentPos(){
 time_t t = now(); // Store the current time in time
 uint8_t h = hour(t) * 10;
 uint8_t m = minute(t) / 6;
 uint8_t pos = h + m;
 return pos;
}
