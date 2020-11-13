#ifndef testaddition_h
#define testaddition_h

#include <Arduino.h>

class add {
  public:
    bool init(int count);
    float sum(int a, int b);
private:
    int _count;

};

#endif