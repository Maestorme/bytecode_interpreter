#include "../../inc/bytecodes/Popm.h"
#include "../../inc/Program.h"


Popm::Popm(){}
Popm::~Popm(){}

//sp -= rstack[sp]+1

void Popm::execute(){
    //Push value to runtime_stack
    int num_of_entries = Program::runtime_stack[Program::stack_pointer]->getInt();
    for (int i = 0; i < num_of_entries + 1; i++){
        Program::runtime_stack.pop_back();
    }
    Program::program_counter++;
    Program::stack_pointer -= num_of_entries + 1;
} 