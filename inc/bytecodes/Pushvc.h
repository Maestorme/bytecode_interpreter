#ifndef PUSHVC_H_
#define PUSHVC_H_

#include "../Bytecode.h"

class Pushvc : public Bytecode{
public:
    Pushvc();
    virtual ~Pushvc();
    virtual void execute();
};

#endif /* PUSHVC_H_ */