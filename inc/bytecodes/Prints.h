#ifndef PRINTS_H_
#define PRINTS_H_

#include "../Bytecode.h"

class Prints : public Bytecode{
public:
    Prints();
    virtual ~Prints();
    virtual void execute();
};

#endif /* PRINTS_H_ */