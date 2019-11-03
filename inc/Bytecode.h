#ifndef BYTECODE_H_
#define BYTECODE_H_

#include "MemoryObject.h"

class Bytecode : public MemoryObject {
public:
    Bytecode();
    virtual ~Bytecode();

    virtual char getChar();
    virtual short getShort();
    virtual int getInt();
    virtual float getFloat();
};
#endif /* BYTECODE_H_ */