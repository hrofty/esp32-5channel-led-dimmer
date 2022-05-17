void handle_OnConnect() {
  server.send(200, "text/html", SendHTML(cur_pos)); 
}

void handle_UpdatePos() {
  uint8_t newpos = server.arg(0).toInt();
  uint16_t new_r = server.arg(1).toInt();
  uint16_t new_g = server.arg(2).toInt();
  uint16_t new_b = server.arg(3).toInt();
  uint16_t new_cw = server.arg(4).toInt();
  uint16_t new_ww = server.arg(5).toInt();
  timeline_updater(newpos, new_r, new_g, new_b, new_cw, new_ww);
  server.send(200, "text/html", SendHTML(newpos)); 
}

void save_timeline() {
  Save_timeline();
  server.send(200, "text/plain", "Timeline Saved"); 
}

void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}

String SendHTML(uint8_t pos){
  
  uint16_t r = TIMELINE[pos].r;
  uint16_t g = TIMELINE[pos].g;
  uint16_t b = TIMELINE[pos].b;
  uint16_t cw = TIMELINE[pos].cw; 
  uint16_t ww = TIMELINE[pos].ww;
  
  String ptr = "<!DOCTYPE html><html><title>\n";
  ptr += boardname;
  ptr += "</title><style></style></head><body><h1>\n";
  ptr += boardname;
  ptr += "</h1><h2>time:\n";
  ptr += TellTime();
  ptr += " = ";
  ptr += cur_pos;
  ptr += "</h2>min: 0-0, 1-6, 2-12, 3-18, 4-24, 5-30, 6-36, 7-42, 8-48, 9-54\n";
  ptr += "<form action=\"/update_pos\">Pos:&nbsp;<input type=\"number\" id=\"pos\" name=\"pos\"min=0 max=240 value=";
  ptr += pos;
  ptr +=  ">&nbsp;";
  ptr += "<br>\n";
  ptr += "R:&nbsp;&nbsp;&nbsp;&nbsp;<input type=\"number\" id=\"r_val\" name=\"pos\"min=0 max=8192 value=";
  ptr += r;
  ptr += ">\n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"r_slide\" oninput=\"document.getElementById('r_val').value = this.value\"><br>  \n";
  ptr += "G:&nbsp;&nbsp;&nbsp;&nbsp;<input type=\"number\" id=\"g_val\" name=\"pos\"min=0 max=8192 value=";
  ptr += g;
  ptr += "> \n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"g_slide\" oninput=\"document.getElementById('g_val').value = this.value\"><br> \n";
  ptr += "B:&nbsp;&nbsp;&nbsp;&nbsp;<input type=\"number\" id=\"b_val\" name=\"pos\"min=0 max=8192 value=";
  ptr += b;
  ptr += "> \n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"b_slide\" oninput=\"document.getElementById('b_val').value = this.value\"><br> \n";
  ptr += "CW:&nbsp;<input type=\"number\" id=\"cw_val\" name=\"pos\" min=0 max=8192 value=";
  ptr += cw;
  ptr +="> \n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"cw_slide\" oninput=\"document.getElementById('cw_val').value = this.value\"><br> \n";
  ptr += "WW:<input type=\"number\" id=\"ww_val\" name=\"pos\"min=0 max=8192 value=";
  ptr += ww;
  ptr += "> \n";
  ptr += "<input type=\"range\" min=\"0\" max=\"8192\" value=\"4096\" class=\"slider\" id=\"ww_slide\" oninput=\"document.getElementById('ww_val').value = this.value\"><br>\n";
  ptr += "<br><input type=\"submit\" value=\"Update\"></form>  \n";
  ptr += "<br><form action=\"/save\"><button type=\"submit\">SAVE TO EEPROM</button></form> \n";  
  ptr += "<script></script></body></html> \n";
  return ptr;
}

void server_setup(){
  server.on("/", handle_OnConnect);
  server.on("/update_pos", handle_UpdatePos);
  server.on("/save", save_timeline);
  server.onNotFound(handle_NotFound);
  }
