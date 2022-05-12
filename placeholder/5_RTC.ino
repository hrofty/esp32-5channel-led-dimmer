uRTCLib rtc(0x68);

void SetRTC(){
  //rtc.set(0, 42, 16, 6, 2, 5, 15);
	// second, minute, hour, dayOfWeek, dayOfMonth, month, year
}

void RTCsetup(){
  URTCLIB_WIRE.begin();

  //run only once!
  SetRTC();
  
}

void PrintTime(){
  rtc.refresh();

	Serial.print("RTC DateTime: ");
	Serial.print(rtc.year());
	Serial.print('/');
	Serial.print(rtc.month());
	Serial.print('/');
	Serial.print(rtc.day());

	Serial.print(' ');

	Serial.print(rtc.hour());
	Serial.print(':');
	Serial.print(rtc.minute());
	Serial.print(':');
	Serial.print(rtc.second());

	Serial.print(" DOW: ");
	Serial.print(rtc.dayOfWeek());

	Serial.println();

	delay(1000);

}