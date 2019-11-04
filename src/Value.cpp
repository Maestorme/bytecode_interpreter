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
    if(value_type == Int){
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

std::string Value::getType(){
    std::string type = "";
    switch(value_type){
        case Char:
            type = "char";
            break;
        case Short:
            type = "short";
            break;
        case Int:
            type = "int";
            break;
        case Float:
            type = "float";
            break;
    }
    return type;
}

void Value::print(std::ostream& out){
    // std::cout << "Values print called";
    out << *(this); 
}
std::ostream& operator<<(std::ostream &out, Value &val){
    // std::cout << "values op<< called;";
    // out << val.value_type << " ";
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
    return out;
}

