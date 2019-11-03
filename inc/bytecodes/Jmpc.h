#ifndef JMPC_H_
#define JMPC_H_

#include "../Bytecode.h"

class Jmpc : public Bytecode{
public:
    Jmpc();
    virtual ~Jmpc();
    virtual void execute();
};

#endif /* JMPC_H_ */