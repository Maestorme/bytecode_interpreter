#include "../../inc/bytecodes/Printc.h"
#include "../../inc/Program.h"
#include <iostream>

Printc::Printc(){}
Printc::~Printc(){}

void Printc::execute(){
    //Print value
    std::cout << Program::runtime_stack[Program::stack_pointer]->getChar();
    //Decrement stack_pointer
    Program::stack_pointer--;
    //Pop value off of stack
    Program::runtime_stack.pop_back();
    //Increment program_counter
    Program::program_counter++;
} 