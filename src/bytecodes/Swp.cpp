#include "../../inc/bytecodes/Swp.h"
#include "../../inc/Program.h"
#include <iostream>

Swp::Swp(){}
Swp::~Swp(){}

void Swp::execute(){
    //Swap top two of runtime stack
    MemoryObject* temp;

    temp = Program::runtime_stack[Program::stack_pointer];
    Program::runtime_stack[Program::stack_pointer] = Program::runtime_stack[Program::stack_pointer - 1];
    Program::runtime_stack[Program::stack_pointer - 1] = temp;
} 