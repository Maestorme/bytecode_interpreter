#ifndef PRINTI_H_
#define PRINTI_H_

#include "../Bytecode.h"

class Printi : public Bytecode{
public:
    Printi();
    virtual ~Printi();
    virtual void execute();
};

#endif /* PRINTI_H_ */