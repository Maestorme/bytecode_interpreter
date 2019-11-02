#ifndef VALUE_H_
#define VALUE_H_



class Value : public RuntimeStackObject, public MemoryObject{
public:
    enum valueTag {Char, Short, Int, Float, Error};
    Value();
    ~Value();
};
#endif /* VALUE_H_ */