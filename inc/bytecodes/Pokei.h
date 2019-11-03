#ifndef POKEI_H_
#define POKEI_H_

#include "../Bytecode.h"

class Pokei : public Bytecode{
public:
    Pokei();
    virtual ~Pokei();
    virtual void execute();
};

#endif /* POKEI_H_ */