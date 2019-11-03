#include "../../inc/bytecodes/Printf.h"
#include "../../inc/Program.h"
#include <iostream>

Printf::Printf(){}
Printf::~Printf(){}

void Printf::execute(){
    //Print value
    std::cout << Program::runtime_stack[Program::stack_pointer]->getFloat();
    //Decrement stack_pointer
    Program::stack_pointer--;
    //Pop value off of stack
    Program::runtime_stack.pop_back();
    //Increment program_counter
    Program::program_counter++;
} 