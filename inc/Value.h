#ifndef VALUE_H_
#define VALUE_H_

enum valueTag {Char, Short, Int, Float, Error}

class Value : public RuntimeStackObject, public MemoryObject{
    Value();
    ~Value();
};
#endif /* VALUE_H_ */