#include "../../inc/bytecodes/Peekc.h"
#include "../../inc/Program.h"


Peekc::Peekc(){}
Peekc::~Peekc(){}


void Peekc::execute(){
    int fps_top = Program::frame_pointer_stack[Program::frame_pointer_stack_pointer];
    Program::runtime_stack[fps_top + Program::runtime_stack[Program::stack_pointer - 1]->getInt() + 1] = Program::runtime_stack[fps_top + Program::runtime_stack[Program::stack_pointer]->getInt() + 1];
    Program::program_counter++;
}