#ifndef POKEC_H_
#define POKEC_H_

#include "../Bytecode.h"

class Pokec : public Bytecode{
public:
    Pokec();
    virtual ~Pokec();
    virtual void execute();
};

#endif /* POKEC_H_ */