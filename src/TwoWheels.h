#ifndef TwoWheels_h
#define TwoWheels_h

#include <Arduino.h>

class TwoWheels{
    public:
        TwoWheels(void);
        void setup(uint8_t MA1, uint8_t MA2, uint8_t MB1, uint8_t MB2);
        void turnCW(float value);
        void turnCCW(float value);
    private:
        uint8_t Left1;
        uint8_t Left2;
        uint8_t Right1;
        uint8_t Right2;
};
#endif