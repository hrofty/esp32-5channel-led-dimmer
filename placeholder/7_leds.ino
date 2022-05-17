void IledcWrite(uint8_t channel, uint16_t brightness){ 
    ledcWrite(channel, constrain(brightness, 0, MAXDUTY));
}


void CurrentBrightness(){
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
	uint16_t r = map(p, 0, 360, TIMELINE[pos].r, TIMELINE[npos].r);
	uint16_t g = map(p, 0, 360, TIMELINE[pos].g, TIMELINE[npos].g);
  uint16_t b = map(p, 0, 360, TIMELINE[pos].b, TIMELINE[npos].b);
 	uint16_t cw = map(p, 0, 360, TIMELINE[pos].cw, TIMELINE[npos].cw); 
  uint16_t ww = map(p, 0, 360, TIMELINE[pos].ww, TIMELINE[npos].ww);

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

}


void AllOff(){
  // RGBCWWW Alloff = {0, 0, 0, 0, 0};
  // ledset(Alloff);
}

void AllOn(){
  // RGBCWWW Allon = {MAXDUTY, MAXDUTY, MAXDUTY, MAXDUTY, MAXDUTY};
  // ledset(Alloff);
}


void StripTest(){
  AllOff();
  
  delay(1000);
  IledcWrite(0, MAXDUTY);
  delay(1000);
  IledcWrite(0, 0);
  
  delay(1000);
  IledcWrite(1, MAXDUTY);
  delay(1000);
  IledcWrite(1, 0);
  
  delay(1000);
  IledcWrite(2, MAXDUTY);
  delay(1000);
  IledcWrite(2, 0);
  
  delay(1000);
  IledcWrite(3, MAXDUTY);
  delay(1000);
  IledcWrite(3, 0);
  
  delay(1000);
  IledcWrite(4, MAXDUTY);
  delay(1000);
  IledcWrite(4, 0);
  
  AllOff();

}
