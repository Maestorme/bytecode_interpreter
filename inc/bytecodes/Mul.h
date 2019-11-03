#ifndef MUL_H_
#define MUL_H_

#include "../Bytecode.h"

class Mul : public Bytecode{
public:
    Mul();
    virtual ~Mul();
    virtual void execute();
};

#endif /* MUL_H_ */