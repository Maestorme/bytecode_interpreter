#include "../inc/Value.h"

Value::Value(){
    value_type = Error;    
}

Value::Value(char){
    value_type = Char;
}

Value::Value(short){
    value_type = Short;
}

Value::Value(int){
    value_type = Int;
}

Value::Value(float){
    value_type = Float;
}

Value::~Value(){}

char Value::getChar(){
    if(value_type == Char){
        return char_value;
    }
    else{
        std::cerr << "Error: getChar() called, but char not found!" << std::endl;
        //Think of how to print the stack trace?
    }
}

short Value::getShort(){
    if(value_type == Short){
        return short_value;
    }
    else{
        std::cerr << "Error: getShort() called, but short not found!" << std::endl;
        //Think of how to print the stack trace?
    }
}

int Value::getInt(){
    if(value_type == Int){
        return int_value;
    }
    else{
        std::cerr << "Error: getInt() called, but int not found!" << std::endl;
        //Think of how to print the stack trace? try catch
    }
}

float Value::getFloat(){
    if(value_type == Float){
        return float_value;
    }
    else{
        std::cerr << "Error: getFloat() called, but float not found!" << std::endl;
        //Think of how to print the stack trace? try catch
    }
}

void Value::execute(){
    std::cerr << "Error: execute() called on a value" << std::endl;
    //Maybe raise an error? Yep try catch works well.
}
std::ostream& operator<<(std::ostream &out, Value &val){
    out << val.value_type << " ";
    switch(val.value_type){
        case Char:
            out << val.char_value;
            break;
        case Short:
            out << val.short_value;
            break;
        case Int:
            out << val.int_value;
            break;
        case Float:
            out << val.float_value;
            break;
    }
    out << std::endl;
    return out;
}