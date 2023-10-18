#include <U8g2lib.h>

void oledTask(void *pvParameters)
{
    U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE, 27, 26);
    u8g2.begin();
    u8g2.setFont(u8g2_font_10x20_tf);
    while (true)
    {
        for(uint8_t pos=0;pos<64;pos++)
        {
            u8g2.clearBuffer();
            u8g2.setCursor(pos+32, pos);
            u8g2.print("Fuck U!");
            u8g2.sendBuffer();
            delay(10);
        }
    }
}