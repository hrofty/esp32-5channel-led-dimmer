TaskHandle_t handlers[] = {handler1, handler2, handler3, handler4, handler5};
TaskFunction_t effects[] = {EffectConstant, EffectConstant, EffectConstant, EffectConstant, EffectConstant}; // DEFAULT
void channel_config(){
  switch (board_id) {
    case 1:
      CHANNEL_BRIGHTNESS[0] = 8192;    
      CHANNEL_BRIGHTNESS[1] = 8192; 
      CHANNEL_BRIGHTNESS[2] = 8192;    
      CHANNEL_BRIGHTNESS[3] = 8192;   
      CHANNEL_BRIGHTNESS[4] = 8192;  
    
    case 2:
      CHANNEL_BRIGHTNESS[0] = 8192;    
      CHANNEL_BRIGHTNESS[1] = 8192; 
      CHANNEL_BRIGHTNESS[2] = 8192;    
      CHANNEL_BRIGHTNESS[3] = 8192;   
      CHANNEL_BRIGHTNESS[4] = 8192;          

    case 3:
      CHANNEL_BRIGHTNESS[0] = 8192;    
      CHANNEL_BRIGHTNESS[1] = 8192; 
      CHANNEL_BRIGHTNESS[2] = 8192;    
      CHANNEL_BRIGHTNESS[3] = 8192;   
      CHANNEL_BRIGHTNESS[4] = 8192;  
              
    case 4:
      CHANNEL_BRIGHTNESS[0] = 8192;    
      CHANNEL_BRIGHTNESS[1] = 8192; 
      CHANNEL_BRIGHTNESS[2] = 8192;    
      CHANNEL_BRIGHTNESS[3] = 8192;   
      CHANNEL_BRIGHTNESS[4] = 8192;  

    default:
      CHANNEL_BRIGHTNESS[0] = 8192;    
      CHANNEL_BRIGHTNESS[1] = 8192; 
      CHANNEL_BRIGHTNESS[2] = 8192;    
      CHANNEL_BRIGHTNESS[3] = 8192;   
      CHANNEL_BRIGHTNESS[4] = 8192;

      break;
  }
}