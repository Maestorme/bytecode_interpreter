#include "../../inc/bytecodes/Pushvc.h"
#include "../../inc/Program.h"


Pushvc::Pushvc(){}
Pushvc::~Pushvc(){}

//rstack[sp] = rstack[fpstack[fpsp]+rstack[sp]+1] 

void Pushvc::execute(){
    //Push value to runtime_stack
    //Program::runtime_stack.push_back(Program::runtime_stack[Program::frame_pointer_stack[Program::frame_pointer_stack_pointer] + Program::runtime_stack[Program::stack_pointer] + 1]);
} 