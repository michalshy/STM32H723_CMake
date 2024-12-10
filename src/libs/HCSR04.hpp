/**
 * Library for control of HC-SR04 sensor
 */

#include "main.h"

// Contains methods and handlers for sensor control
class HCSR04 {
    TIM_HandleTypeDef handler;
public:
    HCSR04(TIM_HandleTypeDef _h): handler(_h) {}
    uint32_t ReadDistance() {
        return HAL_TIM_ReadCapturedValue(&handler, TIM_CHANNEL_1);
    }   
};