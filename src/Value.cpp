#include "../inc/Value.h"

Value::Value(){
    value_type = Error;    
}

Value::Value(char char_value){
    value_type = Char;
    this->char_value = char_value;
}

Value::Value(short short_value){
    value_type = Short;
    this->short_value = short_value;
}

Value::Value(int int_value){
    value_type = Int;
    this->int_value = int_value;
}

Value::Value(float float_value){
    value_type = Float;
    this->float_value = float_value;
}

Value::~Value(){}

char Value::getChar(){
    if(value_type == Char){
        return char_value;
    }
    else{
        throw "Error: getChar() called, but char not found!";
    }
}

short Value::getShort(){
    if(value_type == Short){
        return short_value;
    }
    else{
        throw "Error: getShort() called, but short not found!";
    }
}

int Value::getInt(){
    std::cout << "Calling getInt()" << std::endl;
    if(value_type == Int){
        std::cout << "Returning int_val: " << int_value << std::endl;
        return int_value;
    }
    else{
        throw "Error: getInt() called, but int not found!";
    }
}

float Value::getFloat(){
    if(value_type == Float){
        return float_value;
    }
    else{
        throw "Error: getFloat() called, but float not found!";
    }
}

void Value::execute(){
    throw "Error: execute() called on a value";
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