#pragma once

namespace Images {

  #ifndef DEBUG
  const uint8_t PROGMEM GameOver[] = {
  64, 22,
  0x00, 0xf8, 0x04, 0xf2, 0x0a, 0x0a, 0x0a, 0xca, 0x4a, 0xca, 0xca, 0x0a, 0x0a, 0x4a, 0xca, 0xca, 0x0a, 0x0a, 0x4a, 0xca, 0xca, 0x0a, 0xca, 0xca, 0x4a, 0x4a, 0xca, 0xca, 0x4a, 0xca, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0xca, 0x4a, 0xca, 0x0a, 0x4a, 0xca, 0xca, 0x0a, 0xca, 0x4a, 0x4a, 0xca, 0xca, 0x4a, 0xca, 0x0a, 0x4a, 0xca, 0xca, 0x4a, 0xca, 0x8a, 0x0a, 0x0a, 0x0a, 0xf2, 0x04, 0xf8, 0x00, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x7c, 0xfd, 0x04, 0x80, 0xfe, 0x27, 0xff, 0xf8, 0x80, 0x80, 0xff, 0x1f, 0x0e, 0xff, 0xff, 0x80, 0x80, 0xff, 0xff, 0x84, 0xce, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 0xff, 0x3f, 0x00, 0x03, 0xff, 0xfc, 0x07, 0x00, 0x80, 0xff, 0xff, 0x84, 0xce, 0x00, 0x80, 0xff, 0xff, 0x08, 0xff, 0xf3, 0x80, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 
  0x00, 0x07, 0x08, 0x13, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x13, 0x08, 0x07, 0x00, 
  };
  #else
  const uint8_t PROGMEM GameOver[] = {
  0x00,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM GameOver_Mask[] = {
  0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x07, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x07, 
  };
  #else
  const uint8_t PROGMEM GameOver_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM Pause[] = {
  50, 22,
  0x00, 0xf8, 0x04, 0xf2, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x4a, 0xca, 0xca, 0x4a, 0xca, 0x8a, 0x0a, 0x4a, 0xca, 0xca, 0x0a, 0x0a, 0xca, 0xca, 0x0a, 0xca, 0xca, 0x0a, 0x8a, 0xca, 0x4a, 0xca, 0x8a, 0x0a, 0x4a, 0xca, 0xca, 0x4a, 0xca, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0xf2, 0x04, 0xf8, 0x00, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x88, 0x0f, 0x03, 0x80, 0xfe, 0x27, 0xff, 0xf8, 0x80, 0x3f, 0xff, 0x80, 0xff, 0x3f, 0x00, 0x43, 0xc7, 0x8e, 0xfc, 0x78, 0x00, 0x80, 0xff, 0xff, 0x84, 0xce, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 
  0x00, 0x07, 0x08, 0x13, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x13, 0x08, 0x07, 0x00, 
  };
  #else
  const uint8_t PROGMEM Pause[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM Pause_Mask[] = {
  0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x07, 0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x07, 
  };
  #else
  const uint8_t PROGMEM Pause_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const unsigned char PROGMEM Frogger[] = {
  14, 11,
  0x00, 0x04, 0xde, 0x50, 0xfc, 0xfa, 0xfe, 0xfe, 0xfa, 0xfc, 0x50, 0xde, 0x04, 0x00, 
  0x00, 0x01, 0x03, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x03, 0x01, 0x00, 
  };
  #else
  const uint8_t PROGMEM Frogger[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM Frogger_Mask[] = {
  0x04, 0xde, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xde, 0x04, 
  0x01, 0x03, 0x07, 0x03, 0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x03, 0x07, 0x03, 0x01, 
  };
  #else
  const uint8_t PROGMEM Frogger_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM Hospital[] = {
  46, 26,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0x00, 0xc8, 0xc8, 0x08, 0xc8, 0xc8, 0x00, 0xfe, 0xfe, 0xfe, 0xf6, 0xe2, 0xf6, 0xfe, 0xfe, 0xfe, 0x00, 0xc8, 0xc8, 0x08, 0xc8, 0xc8, 0x00, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x7b, 0x39, 0x00, 0x7b, 0x39, 0x00, 0xff, 0xff, 0xff, 0xff, 0xaa, 0xff, 0xff, 0xff, 0xff, 0x00, 0x7b, 0x39, 0x00, 0x7b, 0x39, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x1f, 0x20, 0x20, 0xa4, 0xae, 0xa4, 0x20, 0xa0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xef, 0xe7, 0x00, 0xef, 0xe7, 0x00, 0xff, 0xbf, 0xff, 0x2f, 0x2a, 0x2f, 0xff, 0xbf, 0xff, 0x00, 0xef, 0xe7, 0x00, 0xef, 0xe7, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x03, 0x03, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x00, 0x02, 0x00, 0x02, 0x03, 0x03, 0x03, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x02, 0x00, 0x03, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x03, 0x03, 0x03, 0x02, 0x00, 
  };
  #else
  const uint8_t PROGMEM Hospital[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM Hospital_Mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 
  };
  #else
  const uint8_t PROGMEM Hospital_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM PacMan[] = {
  14, 15,
  0x00, 0xe0, 0xf8, 0xfc, 0xfc, 0x7e, 0x7e, 0x7e, 0x3e, 0x3e, 0x3c, 0x1c, 0x18, 0x00, 
  0x00, 0x03, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3e, 0x3e, 0x1e, 0x1c, 0x0c, 0x00, 

  0x00, 0x00, 0xe0, 0xf8, 0xfc, 0xfc, 0x7e, 0x3e, 0x1e, 0x0e, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x0f, 0x1f, 0x1f, 0x3f, 0x3e, 0x3c, 0x38, 0x30, 0x00, 0x00, 0x00, 

  0x00, 0xe0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xe0, 
  0x00, 0x03, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x03, 
  };
  #else
  const uint8_t PROGMEM PacMan[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM PacMan_Mask[] = {
  0xe0, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7e, 0x3e, 0x3c, 0x18, 
  0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3e, 0x1e, 0x0c, 

  0x00, 0xe0, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0x7f, 0x3f, 0x1f, 0x0f, 0x06, 0x00, 0x00, 
  0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7e, 0x7c, 0x78, 0x30, 0x00, 0x00, 

  0xe0, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xf8, 
  0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 
  };
  #else
  const uint8_t PROGMEM PacMan_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 
  
  #ifndef DEBUG
  const uint8_t PROGMEM HighscorePanel[] = {
74, 36,
0xf8, 0x04, 0xfa, 0x0d, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x0d, 0xfa, 0x04, 0xf8, 
0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 
0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 
0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 
0x01, 0x02, 0x05, 0x0b, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x05, 0x02, 0x01, 
};
  #else
  const uint8_t PROGMEM HighscorePanel[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM HighscorePanel_Mask[] = {
0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x01, 0x03, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x03, 0x01, 
};
  #else
  const uint8_t PROGMEM HighscorePanel_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM HighscoreText[] = {
69, 13,
0x02, 0xfd, 0x01, 0x01, 0xde, 0xde, 0x01, 0x01, 0xfd, 0xfd, 0x01, 0x01, 0xfd, 0x06, 0x02, 0xfd, 0xc5, 0x29, 0x31, 0xae, 0xfd, 0x01, 0x01, 0xde, 0xde, 0x01, 0x01, 0xfd, 0x02, 0x00, 0x3c, 0xc2, 0x01, 0x0d, 0x19, 0x71, 0xfe, 0x02, 0x01, 0xfd, 0x11, 0xfe, 0x04, 0x02, 0xfd, 0xfd, 0x02, 0x06, 0xfd, 0x01, 0x01, 0xbd, 0xbd, 0x01, 0x42, 0xbe, 0xfd, 0x01, 0x01, 0xbd, 0x15, 0xe9, 0x3e, 0xc2, 0x01, 0x0d, 0x19, 0x71, 0x8e, 
0x08, 0x17, 0x10, 0x10, 0x0f, 0x0f, 0x10, 0x10, 0x17, 0x17, 0x10, 0x10, 0x17, 0x0c, 0x08, 0x17, 0x17, 0x08, 0x10, 0x0f, 0x17, 0x10, 0x10, 0x0f, 0x0f, 0x10, 0x10, 0x17, 0x08, 0x00, 0x0e, 0x11, 0x13, 0x16, 0x10, 0x08, 0x07, 0x08, 0x10, 0x17, 0x09, 0x07, 0x04, 0x08, 0x17, 0x17, 0x08, 0x0c, 0x17, 0x10, 0x10, 0x0f, 0x0f, 0x10, 0x10, 0x17, 0x17, 0x10, 0x10, 0x17, 0x17, 0x11, 0x0e, 0x11, 0x13, 0x16, 0x10, 0x08, 0x07, 
};
  #else
  const uint8_t PROGMEM HighscoreText[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM HighscoreText_Mask[] = {
0x02, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xc7, 0xef, 0xff, 0xee, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0x02, 0x00, 0x3c, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0x1f, 0xfe, 0xfc, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xef, 0x3e, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x8e, 
0x08, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x1f, 0x1f, 0x0f, 0x1f, 0x0f, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x08, 0x00, 0x0e, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x0f, 0x1f, 0x1f, 0x0f, 0x07, 0x07, 0x0f, 0x1f, 0x1f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0e, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 
};
  #else
  const uint8_t PROGMEM HighscoreText_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 

}