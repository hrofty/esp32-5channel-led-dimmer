void setup_timeline() {
  TIMELINE[150] = (RGBCWWW) {1, 2, 3, 4, 5};
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
