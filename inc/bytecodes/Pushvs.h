#ifndef PUSHVS_H_
#define PUSHVS_H_

#include "../Bytecode.h"

class Pushvs : public Bytecode{
public:
    Pushvs();
    virtual ~Pushvs();
    virtual void execute();
};

#endif /* PUSHVS_H_ */