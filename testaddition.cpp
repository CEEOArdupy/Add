#include "testaddition.h"
#include <Arduino.h>

add::add(void) {
	float c=0;
}

float add::sum(float a, float b) {
    c = a+b;
    return c;
}

float add::ten() {
    c = 10;
    return c;
}
