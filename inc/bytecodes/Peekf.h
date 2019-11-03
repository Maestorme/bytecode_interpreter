#ifndef PEEKF_H_
#define PEEKF_H_

#include "../Bytecode.h"

class Peekf : public Bytecode{
public:
    Peekf();
    virtual ~Peekf();
    virtual void execute();
};

#endif /* PEEKF_H_ */