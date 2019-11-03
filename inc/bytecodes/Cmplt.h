#ifndef CMPLT_H_
#define CMPLT_H_

#include "../Bytecode.h"

class Cmplt : public Bytecode{
public:
    Cmplt();
    virtual ~Cmplt();
    virtual void execute();
};

#endif /* CMPLT_H_ */