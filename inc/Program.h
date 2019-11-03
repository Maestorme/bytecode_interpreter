#ifndef PROGRAM_H_
#define PROGRAM_H_

#include <vector>
// #include "RuntimeStackObject.h"
#include "MemoryObject.h"

class Program{
public:
    static std::vector<MemoryObject*> runtime_stack;
    static int stack_pointer;
    static std::vector<int> frame_pointer_stack;
    static int frame_pointer_stack_pointer;
    static int program_counter;
    static std::vector<MemoryObject*> memory;
};
#endif /* PROGRAM_H_ */