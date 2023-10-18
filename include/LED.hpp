#pragma once

#include <Arduino.h>

void ledTask(void *pvParameters)
{
    pinMode(21, OUTPUT); // SDA
    pinMode(22, OUTPUT); // RCK
    pinMode(23, OUTPUT); // SCK
    uint8_t data = 1;
    while (true)
    {
        shiftOut(21, 23, MSBFIRST, data);
        data <<= 1;
        digitalWrite(22, HIGH);
        delay(200);
        digitalWrite(22, LOW);
        if (data == 0)
            data = 1;
    }
}