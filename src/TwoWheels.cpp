#include "TwoWheels.h"
#include <Arduino.h>
#include <Math.h>

TwoWheels::TwoWheels(){
    /* hoge */
}

void TwoWheels::setup(uint8_t MA1, uint8_t MA2, uint8_t MB1, uint8_t MB2){
    /* pin設定 */
    Left1 = MA1;
    Left2 = MA2;
    Right1 = MB1;
    Right2 = MB2;
}

void TwoWheels::turnCW(float value){
    analogWrite( Left1, abs(value));
    analogWrite( Left2, 0);
    analogWrite(Right1, 0);
    analogWrite(Right2, abs(value));
}

void TwoWheels::turnCCW(float value){
    analogWrite( Left1, 0);
    analogWrite( Left2, abs(value));
    analogWrite(Right1, abs(value));
    analogWrite(Right2, 0);
}