#ifndef PUSHVF_H_
#define PUSHVF_H_

#include "../Bytecode.h"

class Pushvf : public Bytecode{
public:
    Pushvf();
    virtual ~Pushvf();
    virtual void execute();
};

#endif /* PUSHVF_H_ */