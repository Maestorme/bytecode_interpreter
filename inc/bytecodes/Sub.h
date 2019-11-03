#ifndef SUB_H_
#define SUB_H_

#include "../Bytecode.h"

class Sub : public Bytecode{
public:
    Sub();
    virtual ~Sub();
    virtual void execute();
};

#endif /* SUB_H_ */