#ifndef testaddition_h
#define testaddition_h

#include "Arduino.h"

class add {
  public:
    add(void);
    uint32 sum(uint32 a, uint32 b);
private:
    uint32 _count;

};

#endif
