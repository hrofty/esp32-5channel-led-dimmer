void wifi_keepalive(void *pvParameters){
  for(;;){
      if(WiFi.status() == WL_CONNECTED){
        if(wl_connected != true){
              wl_connected = true;
              ArduinoOTA.begin();
              server.begin();
        }
        vTaskDelay(10000 / portTICK_PERIOD_MS);
        continue;
      }
      
      // Wifi not connected:
      if(wl_connected == true){
        digitalWrite(LED_BUILTIN, LOW);
        ArduinoOTA.end();
        server.close();
        wl_connected = false;
      }
      WiFi.mode(WIFI_STA);
      WiFi.begin(cfg.SSID, cfg.WFPWD);

      unsigned long startAttemptTime = millis();

      while (WiFi.status() != WL_CONNECTED && millis() - startAttemptTime < WIFI_TIMEOUT){
        //wait for connection
        }
      if (WiFi.status() != WL_CONNECTED){
        vTaskDelay(10000 / portTICK_PERIOD_MS);
        continue;
      }
  
  }
};

void OTA_Setup(){
  ArduinoOTA.setHostname(boardname.c_str());
  ArduinoOTA.setPort(3232);
//  ArduinoOTA.setPassword("admin");
xTaskCreate(wifi_keepalive, "WiFi Watchdog", 5120, NULL, 1, &wifi_handler);
}
