#ifndef PRINTF_H_
#define PRINTF_H_

#include "../Bytecode.h"

class Printf : public Bytecode{
public:
    Printf();
    virtual ~Printf();
    virtual void execute();
};

#endif /* PRINTF_H_ */