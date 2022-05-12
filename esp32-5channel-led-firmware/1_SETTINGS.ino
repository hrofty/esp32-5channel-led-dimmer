Preferences preferences;

void first_setup(){
  int s_id = 9;
  String s_boarname = "GEOESP";
  String s_ssid = "ESPAP";
  String s_password = "7777777";

  
  preferences.begin("settings", false);
  preferences.putUInt("boardID", s_id); 
  preferences.putString("name", s_boarname);
  preferences.putString("ssid", s_ssid); 
  preferences.putString("password", s_password);
  preferences.end();
};

void do_settings(){
  //first_setup(); //Disable after first flash!
  String s_name;
  preferences.begin("settings", true);
  board_id = preferences.getUInt("boardID", 0);
  s_name = preferences.getString("name", "GEOESP");
  ssid = preferences.getString("ssid", "");
  password = preferences.getString("password", "");
  
  preferences.end();

  boardname = s_name + board_id;
}