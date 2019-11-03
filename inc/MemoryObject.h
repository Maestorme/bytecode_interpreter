#ifndef MEMORY_OBJECT_H_
#define MEMORY_OBJECT_H_

#include <vector>
#include <string>
#include <iostream>

class MemoryObject{
public:
    MemoryObject();
    virtual ~MemoryObject();

    virtual void execute() = 0;
    virtual char getChar() = 0;
    virtual short getShort() = 0;
    virtual int getInt() = 0;
    virtual float getFloat() = 0;
    virtual std::string getType() = 0;
    virtual void print(std::ostream&) = 0;

    friend std::ostream& operator<<(std::ostream&, MemoryObject&);
};
#endif /* MEMORY_OBJECT_H_ */