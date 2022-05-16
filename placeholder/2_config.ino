BoardCfg cfg;

void first_setup(){
  String newssid = "ESPAP";
  String newwfpwd = "77777777";
  cfg.boardid = 0;
  newssid.toCharArray(cfg.SSID, 6);
  newwfpwd.toCharArray(cfg.WFPWD, 9);
  EEPROM.put(1, cfg);
  EEPROM.commit();
};

void do_settings(){
  EEPROM.begin(2500);
  //first_setup(); //Enable for the first flash!
  EEPROM.get(1, cfg);
  EEPROM.end();
  boardname += cfg.boardid;
}
