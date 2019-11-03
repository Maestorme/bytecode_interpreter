#ifndef CALL_H_
#define CALL_H_

#include "../Bytecode.h"

class Call : public Bytecode{
public:
    Call();
    virtual ~Call();
    virtual void execute();
};

#endif /* CALL_H_ */