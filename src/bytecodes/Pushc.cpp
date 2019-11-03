#include "../../inc/bytecodes/Pushc.h"
#include "../../inc/Program.h"


Pushc::Pushc(){}
Pushc::~Pushc(){}

void Pushc::execute(){
    //Push value to runtime_stack
    Program::runtime_stack.push_back(Program::memory[Program::program_counter+1]);
    //Increment stack_pointer
    Program::stack_pointer++;
    //Increment program_counter
    Program::program_counter += 2;
} 