#ifndef POKES_H_
#define POKES_H_

#include "../Bytecode.h"

class Pokes : public Bytecode{
public:
    Pokes();
    virtual ~Pokes();
    virtual void execute();
};

#endif /* POKES_H_ */