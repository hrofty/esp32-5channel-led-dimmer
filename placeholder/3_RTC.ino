

void SetRTC(){
 // todo
}

void RTCsetup(){
  Wire.begin(21, 22);
  setSyncProvider(RTC.get);
  setSyncInterval(RTCCHECKINTERVAL);
  //run only once!
  //SetRTC();
  
}

void PrintTime(){
  Serial.print("RTC DateTime: ");
  Serial.print(hour());
  Serial.print(':');
	Serial.print(minute());
	Serial.print(':');
	Serial.print(second());
	Serial.print(' ');
	Serial.print(day());
	Serial.print('/');
	Serial.print(month());
	Serial.print('/');
	Serial.print(year());
	Serial.print(' ');
	Serial.print(" UNIX: ");
	Serial.print(now());
	Serial.println();
}

String TellTime(){
  String nowtime = String(hour());
  nowtime += ":";
  nowtime += String(minute());
  nowtime += "\n";
  return nowtime;
}