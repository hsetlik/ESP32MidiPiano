#include "Peripherals.h"

Peripherals::Peripherals(/* args */) : 
display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET),
encoder(ENC_CLK, ENC_DATA, RotaryEncoder::LatchMode::TWO03)
{
    
}

Peripherals::~Peripherals()
{
}
void Peripherals::encoderTurned(bool dir)
{
}
void Peripherals::buttonPressed()
{
}
void Peripherals::buttonHeld()
{
}