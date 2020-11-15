#ifndef testaddition_h
#define testaddition_h

#include "Arduino.h"

class add {
  public:
    add(void);
    uint32_t sum(uint32_t a, uint32_t b);
private:
    uint32_t _count;

};

#endif
