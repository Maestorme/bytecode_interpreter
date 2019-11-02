#include <iostream>
#include <vector>
#include <fstream>
#include "../inc/MemoryObject.h"
#include "../inc/RuntimeStackObject.h"
#include "../inc/Bytecode.h"
#include "../inc/Value.h"


void push_errors(std::vector<MemoryObject*> &memory, int n){
    for(int i = 0; i < n; i++){
        memory.push_back(new Value());
    }
}

int main(int argc, char **argv){
    std::vector<RuntimeStackObject*> runtime_stack;
    int stack_pointer = -1;
    std::vector<int> frame_pointer_stack;
    int frame_pointer_stack_pointer = -1;
    MemoryObject* program_counter;
    std::vector<MemoryObject*> memory;

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
        // smp_file.read ((char*) file_contents, file_size);
        // smp_file.close();
    }

    //Variable Declarations
    int int_literal = 0;

    for(int i = 0; i < file_size; i++){
        smp_file.read((char*) file_contents + i, 1);

        switch(file_contents[i]){
            /*====================
              Comparison Bytecodes
              ====================*/
            case 132: //Instruction: cmpe
                break;
            case 136: //Instruction: cmplt
                break;
            case 140: //Instruction: cmpgt
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
                break;
            case 69: //Instruction: pushs
                break;
            case 70: //Instruction: pushi
                //Read the next 4 bytes and convert to an integer
                for(int j = 1; j < 5; j++){
                    smp_file.read((char*) file_contents + i + j, 1);
                }
                i += 4;

                int_literal = int((file_contents[i+4]) << 24 |
                                  (file_contents[i+3]) << 16 |
                                  (file_contents[i+2]) << 8  |
                                  (file_contents[i+1]));
                
                //memory.push_back(new Pushi());
                memory.push_back(new Value(int_literal));
                push_errors(memory, 3);
                break;
            case 71: //Instruction: pushf
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