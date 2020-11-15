#ifndef testaddition_h
#define testaddition_h

#include "Arduino.h"

class add {
  public:
    add(void);
    int32_t sum(int32_t a, int32_t b);
private:
    int32_t _count;

};

#endif
