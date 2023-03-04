#define WAIT 600

#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  // put your setup code here, to run once:
  tft.init(); 
}

void loop() {
  // put your main code here, to run repeatedly:
  tft.setTextSize(3);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);

  tft.drawString("no", 0, 50);
  delay(WAIT);
  tft.drawString("such", 0, 100);
  delay(WAIT);
  tft.drawString("thing", 0, 150); 
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  tft.drawString("as", 0, 50);
  delay(WAIT);
  tft.drawString("a", 0, 100);
  delay(WAIT);
  tft.drawString("life", 0, 150); 
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  tft.drawString("that's", 0, 50);
  delay(WAIT);
  tft.drawString("better", 0, 100);
  delay(WAIT);
  tft.drawString("than", 0, 150); 
  delay(WAIT);

  tft.setTextSize(5);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(random(0xFFFF));
  tft.drawString("Y", 50, 20);
  tft.drawString("O", 50, 60);
  tft.drawString("U", 50, 100); 
  tft.drawString("R", 50, 140);
  tft.drawString("Z", 50, 180);
  delay(WAIT);


  

}
