#include "../../inc/bytecodes/Cmplt.h"
#include "../../inc/Program.h"
#include "../../inc/Value.h"

Cmplt::Cmplt(){}
Cmplt::~Cmplt(){}

void Cmplt::execute(){
    Value* new_value;
    //Compare two top elements on stack
    if(Program::runtime_stack[Program::stack_pointer - 1] < Program::runtime_stack[Program::stack_pointer]){
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
