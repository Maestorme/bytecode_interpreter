#ifndef PUSHI_H_
#define PUSHI_H_

#include "../Bytecode.h"
#include <vector>

class Pushi : public Bytecode{
public:
    Pushi();
    virtual ~Pushi();
    virtual void execute();
};

#endif /* PUSHI_H_ */