#ifndef POPM_H_
#define POPM_H_

#include "../Bytecode.h"

class Popm : public Bytecode{
public:
    Popm();
    virtual ~Popm();
    virtual void execute();
};

#endif /* POPM_H_ */