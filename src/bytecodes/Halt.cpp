#include "../../inc/bytecodes/Halt.h"
#include "../../inc/Program.h"
#include <iostream>

Halt::Halt(){}
Halt::~Halt(){}

void Halt::execute(){
    //Halt
    std::cout << "PC: " << Program::program_counter << std::endl;
    std::cout << "SP: " << Program::stack_pointer << std::endl;

    if (Program::runtime_stack.size() != 0){
        std::cout << "RSTACK: [" << Program::runtime_stack[0];
        for(int i = 1; i < Program::runtime_stack.size(); i++){
            std::cout << ", " << Program::runtime_stack[i];
        }
        std::cout << "]" << std::endl;
    }
    else{
        std::cout << "RSTACK: empty" << std::endl;
    }

    std::cout << "FPSP" << Program::frame_pointer_stack_pointer << std::endl;

    if (Program::frame_pointer_stack.size() != 0){
        std::cout << "FPSTACK: [" << Program::frame_pointer_stack[0];
        for(int i = 1; i < Program::frame_pointer_stack.size(); i++){
            std::cout << ", " << Program::frame_pointer_stack[i];
        }
        std::cout << "]" << std::endl;
    }
    else{
        std::cout << "FPSTACK: empty" << std::endl;
    }
    Program::program_counter++;
} 