#pragma once

#include <Adafruit_NeoPixel.h>

void rgbTask(void *pvParameters)
{
    Adafruit_NeoPixel rgb(4, 19);
    rgb.begin();
    rgb.setBrightness(20);
    rgb.show();
    while (true)
    {
        for (uint8_t h = 0; h < 255; h++)
        {
            uint8_t h1 = h + 10;
            uint8_t h2 = h + 20;
            uint8_t h3 = h + 30;
            rgb.setPixelColor(0, rgb.ColorHSV(h * 255, 255, 255));
            rgb.setPixelColor(1, rgb.ColorHSV(h1 * 255, 255, 255));
            rgb.setPixelColor(2, rgb.ColorHSV(h2 * 255, 255, 255));
            rgb.setPixelColor(3, rgb.ColorHSV(h3 * 255, 255, 255));
            rgb.show();
            delay(10);
        }
    }
}
