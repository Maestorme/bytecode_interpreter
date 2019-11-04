#include "../../inc/bytecodes/Call.h"
#include "../../inc/Program.h"

Call::Call(){}
Call::~Call(){}

void Call::execute(){
    //Call a subroutine

    int pos = Program::stack_pointer - Program::runtime_stack[Program::stack_pointer]->getInt() - 1;
    Program::runtime_stack.pop_back();
    Program::stack_pointer--;
    Program::frame_pointer_stack.push_back(pos);
    Program::frame_pointer_stack_pointer++;

    Program::program_counter = Program::runtime_stack[Program::stack_pointer]->getInt();
    Program::stack_pointer--;
    Program::runtime_stack.pop_back();

    
} 