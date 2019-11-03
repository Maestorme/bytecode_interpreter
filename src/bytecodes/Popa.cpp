#include "../../inc/bytecodes/Popa.h"
#include "../../inc/Program.h"

Popa::Popa(){}
Popa::~Popa(){}

//rstack[fpstack[fpsp] + 1] = rstack[sp – rstack[sp]]

void Popa::execute(){
    //Push value to runtime_stack
    int old_pos = Program::stack_pointer;
    for (int i = 1; i <= Program::runtime_stack[old_pos]->getInt(); i++){
        Program::runtime_stack[Program::frame_pointer_stack[Program::frame_pointer_stack_pointer] + i] = Program::runtime_stack[Program::stack_pointer - Program::runtime_stack[Program::stack_pointer]->getInt() + i - 1];
    }
    int new_pos = Program::frame_pointer_stack[Program::frame_pointer_stack_pointer] + Program::runtime_stack[Program::stack_pointer]->getInt();
    for (int i = 0; i < old_pos - new_pos; i++){
        Program::runtime_stack.pop_back();
    }
    Program::program_counter++;
    Program::stack_pointer = new_pos;
} 