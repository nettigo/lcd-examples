//
// Created by viciu on 2/9/24.
//

#ifndef ST7796_4_CALE_LIBGFX_H
#define ST7796_4_CALE_LIBGFX_H
#include <Arduino_GFX_Library.h>
//#include "setupDebug.h"
Arduino_DataBus *bus = new Arduino_HWSPI(D3 /* DC */, D2 /* CS */);
Arduino_GFX *gfx = new Arduino_ST7796(bus, D4 /* RST */);
#include "ntg_napis.h"
void setup(){
    Serial.begin(115200);
    Serial.println("\nSTART");
    gfx->begin(40000000);
    gfx->setRotation(1);
    gfx->fillScreen(BLACK);
    gfx->println("Hello World!");
    Serial.println("Hello");
    delay(1000);
//    gfx->displayOff();
//    gfx->draw16bitRGBBitmap(0, 10, ntg_napis, NTG_NAPIS_WIDTH, NTG_NAPIS_HEIGHT);
    Serial.println("Hello2");
//    gfx->displayOn();

};

void loop(){

};
#endif //ST7796_4_CALE_LIBGFX_H
