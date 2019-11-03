#include "../../inc/bytecodes/Popv.h"
#include "../../inc/Program.h"


Popv::Popv(){}
Popv::~Popv(){}

//rstack[fpstack[fpsp]+rstack[sp]+1] = rstack[sp-1]
//sp -= 2

void Popv::execute(){
    //Push value to runtime_stack
    Program::runtime_stack[Program::frame_pointer_stack[Program::frame_pointer_stack_pointer] + Program::runtime_stack[Program::stack_pointer]->getInt() + 1] = Program::runtime_stack[Program::stack_pointer - 1];
    Program::program_counter++;
    Program::stack_pointer -= 2;
    Program::runtime_stack.pop_back();
    Program::runtime_stack.pop_back();
} 
