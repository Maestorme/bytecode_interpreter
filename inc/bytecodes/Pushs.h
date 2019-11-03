#ifndef PUSHS_H_
#define PUSHS_H_

#include "../Bytecode.h"

class Pushs : public Bytecode{
public:
    Pushs();
    virtual ~Pushs();
    virtual void execute();
};

#endif /* PUSHS_H_ */