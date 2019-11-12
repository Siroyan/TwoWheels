#include "TwoWheels.h"
#include <Math.h>

TwoWheels::TwoWheels(){
    /* hoge */
}

void TwoWheels::setup(uint8_t A1, uint8_t A2, uint8_t B1, uint8_t B2){
    /* pin設定 */
    Left1 = A1;
    Left2 = A2;
    Right1 = B1;
    Right2 = B2;
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