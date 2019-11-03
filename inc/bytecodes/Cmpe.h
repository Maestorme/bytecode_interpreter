#ifndef CMPE_H_
#define CMPE_H_

#include "../Bytecode.h"

class Cmpe : public Bytecode{
public:
    Cmpe();
    virtual ~Cmpe();
    virtual void execute();
};

#endif /* CMPE_H_ */