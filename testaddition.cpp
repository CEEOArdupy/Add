#include "testaddition.h"
#include <Arduino.h>

add::add(void) {
	float c=0;
}

float add::sum(float a, float b) {
    float c = a+b;
    return c;
}
