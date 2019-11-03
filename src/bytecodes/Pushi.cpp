#include "../../inc/bytecodes/Pushi.h"
#include "../../inc/Value.h"
#include "../../inc/Program.h"
#include <vector>


Pushi::Pushi(){}
Pushi::~Pushi(){}

void Pushi::execute(){
    //Push value to runtime_stack
    Program::runtime_stack.push_back(Program::memory[Program::program_counter+1]);
    //Increment stack_pointer
    Program::stack_pointer++;
    //Increment program_counter
    Program::program_counter += 5;

} 