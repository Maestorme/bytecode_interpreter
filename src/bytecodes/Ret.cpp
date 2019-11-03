#include "../../inc/bytecodes/Ret.h"
#include "../../inc/Program.h"

Ret::Ret(){}
Ret::~Ret(){}

void Ret::execute(){
    //Restore sp
    int old_sp = Program::stack_pointer;
    int new_sp = Program::frame_pointer_stack[Program::frame_pointer_stack_pointer--];
    Program::frame_pointer_stack.pop_back();

    for(int i = 0; i < old_sp - new_sp; i++){
        Program::runtime_stack.pop_back();
    }

    Program::stack_pointer = new_sp;

    Program::program_counter = Program::runtime_stack[Program::stack_pointer--]->getInt();
    Program::runtime_stack.pop_back();
} 