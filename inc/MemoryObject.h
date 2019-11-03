#ifndef MEMORY_OBJECT_H_
#define MEMORY_OBJECT_H_

#include "RuntimeStackObject.h"
#include <vector>

class MemoryObject{
public:
    MemoryObject();
    virtual ~MemoryObject();

    virtual void execute() = 0;
    virtual char getChar() = 0;
    virtual short getShort() = 0;
    virtual int getInt() = 0;
    virtual float getFloat() = 0;
};
#endif /* MEMORY_OBJECT_H_ */