#include "../../inc/bytecodes/Jmp.h"
#include "../../inc/Program.h"

Jmp::Jmp(){}
Jmp::~Jmp(){}

void Jmp::execute(){
    //Jump to location at top of runtime stack
    Program::program_counter = Program::runtime_stack[Program::stack_pointer]->getInt();
    Program::runtime_stack.pop_back();

    Program::stack_pointer--;
} 
