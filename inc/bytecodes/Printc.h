#ifndef PRINTC_H_
#define PRINTC_H_

#include "../Bytecode.h"

class Printc : public Bytecode{
public:
    Printc();
    virtual ~Printc();
    virtual void execute();
};

#endif /* PRINTC_H_ */