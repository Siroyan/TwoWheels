#ifndef TwoWheels_h
#define TwoWheels_h

class TwoWheels{
    public:
        TwoWheels(void);
        void setup(uint8_t A1, uint8_t A2, uint8_t B1, uint8_t B2);
        void turnCW(float value);
        void turnCCW(float value);
    private:
        uint8_t Left1;
        uint8_t Left2;
        uint8_t Right1;
        uint8_t Right2;
};
#endif