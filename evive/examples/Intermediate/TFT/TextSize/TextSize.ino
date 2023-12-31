/*
  Using TFT Display to change text size.
  
  Created by Nihar Shah.
  This code is in Public domain.
  
  Explore more on : https://thestempedia.com/tutorials/tft-text-manipulation/
*/
#include <evive.h>
void setup() {
  Serial.begin(9600);
  tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab
  tft.setRotation(1);
  Serial.println("Initialized");
  tft.fillScreen(ST7735_BLACK);
}

void loop() {
  tft.fillScreen(ST7735_BLACK);
  tft.setTextColor(ST7735_WHITE);
  tft.setCursor(0,0);
  
  tft.setTextSize(1);
  tft.println("S1");
  delay(1000);

  tft.setTextSize(2);
  tft.println("S2");
  delay(1000);

  tft.setTextSize(3);
  tft.println("S3");
  delay(1000);
  
  tft.setTextSize(4);
  tft.println("S4");
  delay(1000);

  tft.setTextSize(5);
  tft.println("S5");
  delay(1000);
}
