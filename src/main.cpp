#include <iostream>
#include <vector>
#include <fstream>
#include "../inc/MemoryObject.h"
#include "../inc/RuntimeStackObject.h"
#include "../inc/Bytecode.h"

int main(int argc, char **argv){
    std::vector<RuntimeStackObject*> rstack;
    int sp = -1;
    std::vector<int> fpstack;
    int fpsp = -1;
    Bytecode *pc;

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

    for(int i = 0; i < file_size; i++){
        smp_file.read((char*) file_contents + i, 1);

        std::cout << "The data is: "  << +file_contents[i]  << std::endl;
    }
    smp_file.close();

    delete[] file_contents;
}