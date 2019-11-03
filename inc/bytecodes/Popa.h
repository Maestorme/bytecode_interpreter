#ifndef POPA_H_
#define POPA_H_

#include "../Bytecode.h"

class Popa : public Bytecode{
public:
    Popa();
    virtual ~Popa();
    virtual void execute();
};

#endif /* POPA_H_ */