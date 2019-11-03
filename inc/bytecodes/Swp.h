#ifndef SWP_H_
#define SWP_H_

#include "../Bytecode.h"

class Swp : public Bytecode{
public:
    Swp();
    virtual ~Swp();
    virtual void execute();
};

#endif /* SWP_H_ */