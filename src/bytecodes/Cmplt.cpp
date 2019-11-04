#include "../../inc/bytecodes/Cmplt.h"
#include "../../inc/Program.h"
#include "../../inc/Value.h"

Cmplt::Cmplt(){}
Cmplt::~Cmplt(){}

void Cmplt::execute(){
    std::string type = Program::runtime_stack[Program::stack_pointer]->getType();
    Value* new_value;
    if (type == "int"){        
        if(Program::runtime_stack[Program::stack_pointer - 1]->getInt() < Program::runtime_stack[Program::stack_pointer]->getInt()){
            new_value = new Value((int) 1);
        }
        else{
            new_value = new Value((int) 0);
        }
    }
    else if (type == "float"){
        if(Program::runtime_stack[Program::stack_pointer - 1]->getFloat() < Program::runtime_stack[Program::stack_pointer]->getFloat()){
            new_value = new Value((int) 1);
        }
        else{
            new_value = new Value((int) 0);
        }
    }
    else if (type == "short"){
        if(Program::runtime_stack[Program::stack_pointer - 1]->getShort() < Program::runtime_stack[Program::stack_pointer]->getShort()){
            new_value = new Value((int) 1);
        }
        else{
            new_value = new Value((int) 0);
        }
    }
    else {
        if(Program::runtime_stack[Program::stack_pointer - 1]->getChar() < Program::runtime_stack[Program::stack_pointer]->getChar()){
            new_value = new Value((int) 1);
        }
        else{
            new_value = new Value((int) 0);
        } 
    }
    //Pop top two elements
    Program::runtime_stack.pop_back();
    Program::runtime_stack.pop_back();

    //Push result of comparison
    Program::runtime_stack.push_back(new_value);

    Program::stack_pointer--;
    Program::program_counter++;
} 
