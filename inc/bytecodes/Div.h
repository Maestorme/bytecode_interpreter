#ifndef DIV_H_
#define DIV_H_

#include "../Bytecode.h"

class Div : public Bytecode{
public:
    Div();
    virtual ~Div();
    virtual void execute();
};

#endif /* DIV_H_ */