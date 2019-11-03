#ifndef BYTECODE_H_
#define BYTECODE_H_

#include "MemoryObject.h"
#include <string>

class Bytecode : public MemoryObject {
public:
    Bytecode();
    virtual ~Bytecode();

    virtual char getChar();
    virtual short getShort();
    virtual int getInt();
    virtual float getFloat();
    virtual std::string getType();
    virtual void print(std::ostream&);
};
#endif /* BYTECODE_H_ */