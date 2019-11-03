#ifndef POPV_H_
#define POPV_H_

#include "../Bytecode.h"

class Popv : public Bytecode{
public:
    Popv();
    virtual ~Popv();
    virtual void execute();
};

#endif /* POPV_H_ */