#include "../inc/MemoryObject.h"

MemoryObject::MemoryObject(){}
MemoryObject::~MemoryObject(){}

std::ostream& operator<<(std::ostream &out, MemoryObject &mem){
    mem.print(out);
    return out;
}
