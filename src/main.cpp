#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <RGB.hpp>
#include <LED.hpp>
#include <OLED.hpp>

void setup()
{
  // put your setup code here, to run once:
  xTaskCreate(rgbTask, "RGB Task", 1000, NULL, 1, NULL);
  xTaskCreate(ledTask, "LED Task", 1000, NULL, 1, NULL);
  xTaskCreate(oledTask, "OLED Task", 10000, NULL, 1, NULL);
}

void loop()
{
  // put your main code here, to run repeatedly:
}
