#ifndef HALT_H_
#define HALT_H_

#include "../Bytecode.h"

class Halt : public Bytecode{
public:
    Halt();
    virtual ~Halt();
    virtual void execute();
};

#endif /* HALT_H_ */