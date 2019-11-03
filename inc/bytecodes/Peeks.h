#ifndef PEEKS_H_
#define PEEKS_H_

#include "../Bytecode.h"

class Peeks : public Bytecode{
public:
    Peeks();
    virtual ~Peeks();
    virtual void execute();
};

#endif /* PEEKS_H_ */