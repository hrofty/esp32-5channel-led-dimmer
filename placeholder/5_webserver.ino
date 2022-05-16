WebServer server(80);


void server_setup() {
  server.on("/", handle_OnConnect);
  server.on("/update_pos", handle_UpdatePos);
  server.onNotFound(handle_NotFound);
  server.begin();

}

void handle_OnConnect() {
  server.send(200, "text/html", SendHTML(0)); 
}

void handle_UpdatePos() {
  //TODO
  server.send(200, "text/html", SendHTML(0)); 
}
 

void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}

String SendHTML(uint8_t pos){
  String ptr = "<!DOCTYPE html><html><title>\n";
  ptr += boardname;
  ptr += "</title><style></style></head><body><h1>\n";
  ptr += boardname;
  ptr += "</h1><h2>time:\n";
  ptr += TellTime();
  ptr += "</h2>\n";
  ptr += "<form action=\"/update_pos\">Pos:&nbsp;<input type=\"number\" id=\"pos\" name=\"pos\"min=0 max=240 value=0>&nbsp;min: 0-0, 1-6, 2-12, 3-18, 4-24, 5-30, 6-36, 7-42, 8-48, 9-54<br>\n";
  ptr += "R:&nbsp;&nbsp;&nbsp;&nbsp;<input type=\"number\" id=\"r_val\" name=\"pos\"min=0 max=8192 value=4096>\n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"r_slide\" oninput=\"document.getElementById('r_val').value = this.value\"><br>  \n";
  ptr += "G:&nbsp;&nbsp;&nbsp;&nbsp;<input type=\"number\" id=\"g_val\" name=\"pos\"min=0 max=8192 value=4096> \n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"g_slide\" oninput=\"document.getElementById('g_val').value = this.value\"><br> \n";
  ptr += "B:&nbsp;&nbsp;&nbsp;&nbsp;<input type=\"number\" id=\"b_val\" name=\"pos\"min=0 max=8192 value=4096> \n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"b_slide\" oninput=\"document.getElementById('b_val').value = this.value\"><br> \n";
  ptr += "CW:&nbsp;<input type=\"number\" id=\"cw_val\" name=\"pos\" min=0 max=8192 value=4096> \n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"cw_slide\" oninput=\"document.getElementById('cw_val').value = this.value\"><br> \n";
  ptr += "WW:<input type=\"number\" id=\"ww_val\" name=\"pos\"min=0 max=8192 value=4096> \n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"ww_slide\" oninput=\"document.getElementById('ww_val').value = this.value\"><br> \n";
  ptr += "<br><input type=\"submit\" value=\"Update\"> \n";
  ptr += "</form><script></script></body></html> \n";
  return ptr;
}
