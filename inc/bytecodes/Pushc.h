#ifndef PUSHC_H_
#define PUSHC_H_

#include "../Bytecode.h"

class Pushc : public Bytecode{
public:
    Pushc();
    virtual ~Pushc();
    virtual void execute();
};

#endif /* PUSHC_H_ */