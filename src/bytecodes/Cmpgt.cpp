#include "../../inc/bytecodes/Cmpgt.h"
#include "../../inc/Program.h"
#include "../../inc/Value.h"

Cmpgt::Cmpgt(){}
Cmpgt::~Cmpgt(){}

void Cmpgt::execute(){
    Value* new_value;
    //Compare two top elements on stack
    if(Program::runtime_stack[Program::stack_pointer - 1] > Program::runtime_stack[Program::stack_pointer]){
        new_value = new Value((int) 1);
    }
    else{
        new_value = new Value((int) 0);
    }

    //Pop top two elements
    Program::runtime_stack.pop_back();
    Program::runtime_stack.pop_back();

    //Push result of comparison
    Program::runtime_stack.push_back(new_value);

    Program::stack_pointer--;
    Program::program_counter++;
} 
