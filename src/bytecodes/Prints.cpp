#include "../../inc/bytecodes/Prints.h"
#include "../../inc/Program.h"
#include <iostream>

Prints::Prints(){}
Prints::~Prints(){}

void Prints::execute(){
    //Print value
    std::cout << Program::runtime_stack[Program::stack_pointer]->getShort();
    //Decrement stack_pointer
    Program::stack_pointer--;
    //Pop value off of stack
    Program::runtime_stack.pop_back();
    //Increment program_counter
    Program::program_counter++;
} 