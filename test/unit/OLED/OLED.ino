#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
 
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 
 
#define OLED_RESET -1 
Adafruit_SSD1306 OLED(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
 
void setup() {
Serial.begin(9600);
}
 
void loop() {
OLED.clearDisplay();
OLED.setTextColor(WHITE, BLACK);
OLED.setCursor(10,35);
OLED.setTextSize(2);
OLED.println("_CHUNTHM_");
OLED.display();
delay(1000);
}