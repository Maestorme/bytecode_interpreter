#ifndef VALUE_H_
#define VALUE_H_

#include "RuntimeStackObject.h"
#include "MemoryObject.h"
#include <iostream>

enum valueTag {Char, Short, Int, Float, Error};

class Value : public RuntimeStackObject, public MemoryObject{
public:
    Value();
    Value(char);
    Value(short);
    Value(int);
    Value(float);
    virtual ~Value();

    virtual char getChar();
    virtual short getShort();
    virtual int getInt();
    virtual float getFloat();
    virtual void execute();

    friend std::ostream& operator<<(std::ostream&, Value&);
private:
    valueTag value_type;
    char char_value;
    short short_value;
    int int_value;
    float float_value;
};
#endif /* VALUE_H_ */