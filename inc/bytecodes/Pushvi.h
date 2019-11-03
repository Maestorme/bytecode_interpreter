#ifndef PUSHVI_H_
#define PUSHVI_H_

#include "../Bytecode.h"

class Pushvi : public Bytecode{
public:
    Pushvi();
    virtual ~Pushvi();
    virtual void execute();
};

#endif /* PUSHVI_H_ */