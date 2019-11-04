#include "../../inc/bytecodes/Sub.h"
#include "../../inc/Program.h"
#include "../../inc/Value.h"

Sub::Sub(){}
Sub::~Sub(){}

void Sub::execute(){
    std::string type = Program::runtime_stack[Program::stack_pointer]->getType();
    if (type == "int"){
        //get both ints separately
        int int1 = Program::runtime_stack[Program::stack_pointer - 1]->getInt();
        int int2 = Program::runtime_stack[Program::stack_pointer]->getInt();
        //pop twice from rs
        Program::runtime_stack.pop_back();
        Program::runtime_stack.pop_back();
        //rs.push_back(new Value(int1 / int2))
        Program::runtime_stack.push_back((new Value(int1 - int2)));
    }
    else if (type == "float"){
        float float1 = Program::runtime_stack[Program::stack_pointer - 1]->getFloat();
        float float2 = Program::runtime_stack[Program::stack_pointer]->getFloat();
        Program::runtime_stack.pop_back();
        Program::runtime_stack.pop_back();
        Program::runtime_stack.push_back((new Value(float1 - float2)));
    }
    else if (type == "short"){
        short short1 = Program::runtime_stack[Program::stack_pointer - 1]->getShort();
        short short2 = Program::runtime_stack[Program::stack_pointer]->getShort();
        Program::runtime_stack.pop_back();
        Program::runtime_stack.pop_back();
        Program::runtime_stack.push_back((new Value((short)(short1 - short2))));
    }
    else {
        unsigned char char1 = Program::runtime_stack[Program::stack_pointer - 1]->getChar();
        unsigned char char2 = Program::runtime_stack[Program::stack_pointer]->getChar();
        Program::runtime_stack.pop_back();
        Program::runtime_stack.pop_back();
        Program::runtime_stack.push_back((new Value((char) (char1 - char2))));
    }
    Program::stack_pointer--;
    Program::program_counter++;
} 