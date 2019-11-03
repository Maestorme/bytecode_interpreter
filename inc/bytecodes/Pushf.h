#ifndef PUSHF_H_
#define PUSHF_H_

#include "../Bytecode.h"

class Pushf : public Bytecode{
public:
    Pushf();
    virtual ~Pushf();
    virtual void execute();
};

#endif /* PUSHF_H_ */