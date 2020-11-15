#ifndef testaddition_h
#define testaddition_h

#include "Arduino.h"

class add {
  public:
    add(int count=0);
    float sum(int a, int b);
private:
    int _count;

};

#endif