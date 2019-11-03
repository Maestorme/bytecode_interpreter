#ifndef POKEF_H_
#define POKEF_H_

#include "../Bytecode.h"

class Pokef : public Bytecode{
public:
    Pokef();
    virtual ~Pokef();
    virtual void execute();
};

#endif /* POKEF_H_ */