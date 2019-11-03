#ifndef RET_H_
#define RET_H_

#include "../Bytecode.h"

class Ret : public Bytecode{
public:
    Ret();
    virtual ~Ret();
    virtual void execute();
};

#endif /* RET_H_ */