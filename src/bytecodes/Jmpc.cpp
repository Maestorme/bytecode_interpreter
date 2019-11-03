#include "../../inc/bytecodes/Jmpc.h"
#include "../../inc/Program.h"

Jmpc::Jmpc(){}
Jmpc::~Jmpc(){}

void Jmpc::execute(){
    //Jump to location at top of runtime stack if next val is 1
    if(Program::runtime_stack[Program::stack_pointer - 1]->getInt() == 1){
        Program::program_counter = Program::runtime_stack[Program::stack_pointer]->getInt();
    }
    else{
        Program::program_counter++;
    }
    Program::runtime_stack.pop_back();
    Program::runtime_stack.pop_back();

    Program::stack_pointer -= 2;
} 