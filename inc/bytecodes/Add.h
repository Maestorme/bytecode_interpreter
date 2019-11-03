#ifndef ADD_H_
#define ADD_H_

#include "../Bytecode.h"

class Add : public Bytecode{
public:
    Add();
    virtual ~Add();
    virtual void execute();
};

#endif /* ADD_H_ */