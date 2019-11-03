#include "../inc/Program.h"

int Program::program_counter = 0;
int Program::frame_pointer_stack_pointer = -1;
int Program::stack_pointer = -1;
std::vector<MemoryObject*> Program::runtime_stack = std::vector<MemoryObject*>();
std::vector<MemoryObject*> Program::memory = std::vector<MemoryObject*>();
std::vector<int> Program::frame_pointer_stack = std::vector<int>();