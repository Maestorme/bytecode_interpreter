#include <iostream>
#include <vector>
#include <fstream>
#include "../inc/MemoryObject.h"
#include "../inc/RuntimeStackObject.h"
#include "../inc/Bytecode.h"
#include "../inc/Value.h"
#include "../inc/Program.h"
#include "../inc/includes.h"

void push_errors_to_memory(int n){
    for(int i = 0; i < n; i++){
        Program::memory.push_back(new Value());
    }
}

int main(int argc, char **argv){
    if(argc != 2){
        std::cerr << "Usage: bin/interpreter <input_file>" << std::endl;
        return 1;
    }
    std::ifstream smp_file;
    
    smp_file.open(argv[1], std::ios::in | std::ios::binary);

    int file_size = 0;
    unsigned char *file_contents;    

    if (smp_file.is_open()){
        smp_file.unsetf(std::ios::skipws);
        smp_file.seekg (0, std::ios::end);
        file_size = smp_file.tellg();
        file_contents = new unsigned char [file_size];
        smp_file.seekg (0, std::ios::beg);
    }

    //Variable Declarations
    int int_literal = 0;
    short short_literal = 0;
    float float_literal = 0;

    for(int i = 0; i < file_size; i++){
        smp_file.read((char*) file_contents + i, 1);

        switch(file_contents[i]){
            /*====================
              Comparison Bytecodes
              ====================*/
            case 132: //Instruction: cmpe
                Program::memory.push_back(new Cmpe());
                break;
            case 136: //Instruction: cmplt
                Program::memory.push_back(new Cmplt());
                break;
            case 140: //Instruction: cmpgt
                Program::memory.push_back(new Cmpgt());
                break;

            /*======================
              Control Flow Bytecodes
              ======================*/
            case 36: //Instruction: jmp
                break;
            case 40: //Instruction: jmpc
                break;
            case 44: //Instruction: call
                break;
            case 48: //Instruction: ret
                break;

            /*============================
              Stack Manipulation Bytecodes
              ============================*/
            case 68: //Instruction: pushc
                //Read the next byte and convert to a character
                smp_file.read((char*) file_contents + i + 1, 1);
                Program::memory.push_back(new Pushc());
                Program::memory.push_back(new Value((char) file_contents[i+1]));
                i += 1;
                break;
            case 69: //Instruction: pushs
                //Read the next 2 bytes and convert to a short
                for(int j = 1; j < 3; j++){
                    smp_file.read((char*) file_contents + i + j, 1);
                }
                short_literal = short((file_contents[i+2]) << 8  |
                                      (file_contents[i+1]));
                i += 2;
                Program::memory.push_back(new Pushs());
                Program::memory.push_back(new Value(short_literal));
                push_errors_to_memory(1);
                break;
            case 70: //Instruction: pushi
                //Read the next 4 bytes and convert to an integer
                for(int j = 1; j < 5; j++){
                    smp_file.read((char*) file_contents + i + j, 1);
                }
                int_literal = int((file_contents[i+4]) << 24 |
                                  (file_contents[i+3]) << 16 |
                                  (file_contents[i+2]) << 8  |
                                  (file_contents[i+1]));
                i += 4;
                Program::memory.push_back(new Pushi());
                Program::memory.push_back(new Value(int_literal));
                push_errors_to_memory(3);
                break;
            case 71: //Instruction: pushf
                //Read the next 4 bytes and convert to a float
                for(int j = 1; j < 5; j++){
                    smp_file.read((char*) file_contents + i + j, 1);
                }
                float_literal = float((file_contents[i+4]) << 24 |
                                  (file_contents[i+3]) << 16 |
                                  (file_contents[i+2]) << 8  |
                                  (file_contents[i+1]));
                i += 4;
                Program::memory.push_back(new Pushf());
                Program::memory.push_back(new Value(float_literal));
                push_errors_to_memory(3);
                break;
            case 72: //Instruction: pushvc
                break;
            case 73: //Instruction: pushvs
                break;
            case 74: //Instruction: pushvi
                break;
            case 75: //Instruction: pushvf
                break;
            case 76: //Instruction: popm
                break;
            case 77: //Instruction: popa
                break;
            case 80: //Instruction: popv
                break;
            case 84: //Instruction: peekc
                break;
            case 85: //Instruction: peeks
                break;
            case 86: //Instruction: peeki
                break;
            case 87: //Instruction: peekf
                break;
            case 88: //Instruction: pokec
                break;
            case 89: //Instruction: pokes
                break;
            case 90: //Instruction: pokei
                break;
            case 91: //Instruction: pokef
                break;
            case 94: //Instruction: swp
                break;

            /*====================
              Arithmetic Bytecodes
              ====================*/
            case 100: //Instruction: add
                break;
            case 104: //Instruction: sub
                break;
            case 108: //Instruction: mul
                break;
            case 112: //Instruction: div
                break;

            /*=========================
              Special Op Code Bytecodes
              =========================*/
            case 144: //Instruction: printc
                break;
            case 145: //Instruction: prints
                break;
            case 146: //Instruction: printi
                break;
            case 147: //Instruction: printf
                break;
            case 0: //Instruction: halt
                break;
            default:
                std::cout << "Unrecognized bytecode: "  << +file_contents[i]  << std::endl;
        }
    }
    smp_file.close();

    delete[] file_contents;
}