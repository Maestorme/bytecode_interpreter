#ifndef JMP_H_
#define JMP_H_

#include "../Bytecode.h"

class Jmp : public Bytecode{
public:
    Jmp();
    virtual ~Jmp();
    virtual void execute();
};

#endif /* JMP_H_ */