WebServer server(80);


void server_setup() {
  server.on("/", handle_OnConnect);
  server.on("/led1on", handle_led1on);
  server.on("/led1off", handle_led1off);
  server.onNotFound(handle_NotFound);
  server.begin();

}

void handle_OnConnect() {
  LED1status = LOW;
  LED2status = LOW;
  server.send(200, "text/html", SendHTML(LED1status,LED2status)); 
}
void handle_led1on() {
  LED1status = HIGH;
  server.send(200, "text/html", SendHTML(true,LED2status)); 
}
void handle_led1off() {
  LED1status = LOW;
  server.send(200, "text/html", SendHTML(false,LED2status)); 
}
 

void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}
String SendHTML(uint8_t led1stat,uint8_t led2stat){
  String ptr = "<!DOCTYPE html> <html><title>\n";
  ptr += boardname;
  ptr +="</title><style>\n";
  ptr +="  \n";
  ptr +="</style></head><body>\n";
  
  ptr +="<h1>\n";
  ptr += boardname;
  ptr +="</h1>\n";
  
   if(led1stat)
  {ptr +="<p>Состояние LED1: ВКЛ.</p><a class=\"button button-off\" href=\"/led1off\">ВЫКЛ.</a>\n";}
  else
  {ptr +="<p>Состояние LED1: ВЫКЛ.</p><a class=\"button button-on\" href=\"/led1on\">ВКЛ.</a>\n";}
  if(led2stat)
  {ptr +="<p>Состояние LED2: ВКЛ.</p><a class=\"button button-off\" href=\"/led2off\">ВЫКЛ.</a>\n";}
  else
  {ptr +="<p>Состояние LED2: ВЫКЛ.</p><a class=\"button button-on\" href=\"/led2on\">ВКЛ.</a>\n";}

  
  ptr +="</body></html>\n";
  
  return ptr;
}
