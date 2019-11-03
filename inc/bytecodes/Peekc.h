#ifndef PEEKC_H_
#define PEEKC_H_

#include "../Bytecode.h"

class Peekc : public Bytecode{
public:
    Peekc();
    virtual ~Peekc();
    virtual void execute();
};

#endif /* PEEKC_H_ */