#include "../../inc/bytecodes/Pushvf.h"
#include "../../inc/Program.h"


Pushvf::Pushvf(){}
Pushvf::~Pushvf(){}

//rstack[sp] = rstack[fpstack[fpsp]+rstack[sp]+1] 

void Pushvf::execute(){
    //Push value to runtime_stack
    int pos = Program::frame_pointer_stack[Program::frame_pointer_stack_pointer] + Program::runtime_stack[Program::stack_pointer]->getInt() + 1;
    Program::runtime_stack.pop_back();
    Program::runtime_stack.push_back(Program::runtime_stack[pos]);
    Program::program_counter++;
} 