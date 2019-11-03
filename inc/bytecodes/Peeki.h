#ifndef PEEKI_H_
#define PEEKI_H_

#include "../Bytecode.h"

class Peeki : public Bytecode{
public:
    Peeki();
    virtual ~Peeki();
    virtual void execute();
};

#endif /* PEEKI_H_ */