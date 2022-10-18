#ifndef PERIPHERALS_H
#define PERIPHERALS_H
#include "Adafruit_GFX.h"
#include "Wire.h"
#include "Adafruit_SSD1306.h"
#include "RotaryEncoder.h"

/*===========PINS===================*/
#define ENC_DATA 21
#define ENC_CLK 22
#define ENC_BUTTON 23
/*==================================*/
//Display Stuff
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3D ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

class Peripherals
{
private:
    Adafruit_SSD1306 display;
    RotaryEncoder encoder;
    /* data */
    // input handling
    void encoderTurned(bool dir);
    void buttonPressed();
    void buttonHeld();
public:
    Peripherals(/* args */);
    ~Peripherals();
};

#endif // !PERIPHERALS_H