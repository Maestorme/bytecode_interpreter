#ifndef CMPGT_H_
#define CMPGT_H_

#include "../Bytecode.h"

class Cmpgt : public Bytecode{
public:
    Cmpgt();
    virtual ~Cmpgt();
    virtual void execute();
};

#endif /* CMPGT_H_ */