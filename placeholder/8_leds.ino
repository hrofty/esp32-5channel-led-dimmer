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
	//uint16_t brightness = map(p, 0, 360, TIMELINE[pos], TIMELINE[npos]);

	Serial.print("T:");
  Serial.print(hour(t));
  Serial.print(':');
	Serial.print(minute(t));
	Serial.print(':');
	Serial.print(second(t));
	Serial.print(" U:");
	Serial.print(now());
	Serial.print(" pos:");
 	Serial.print(pos);
	Serial.print(" npos:");
 	Serial.println(npos);
	Serial.print(d);
	Serial.print(":");
	Serial.print(m);
	Serial.print(":");
	Serial.println(p);
}

// void ledset (RGBCWWW* set){
//   ledcWrite(0, constrain(set.r, 0, MAXDUTY));
//   ledcWrite(1, constrain(set.g, 0, MAXDUTY));
//   ledcWrite(2, constrain(set.b, 0, MAXDUTY));
//   ledcWrite(3, constrain(set.cw, 0, MAXDUTY));
//   ledcWrite(4, constrain(set.ww, 0, MAXDUTY));
// }

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

