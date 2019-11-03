#include "../inc/Bytecode.h"

Bytecode::Bytecode(){}
Bytecode::~Bytecode(){}

char Bytecode::getChar(){
    throw "getChar() called on a bytecode object.";
}

short Bytecode::getShort(){
    throw "getShort() called on a bytecode object.";
}

int Bytecode::getInt(){
    throw "getInt() called on a bytecode object.";
}

float Bytecode::getFloat(){
    throw "getFloat() called on a bytecode object.";
}