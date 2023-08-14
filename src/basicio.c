#include "basicio.h"
#include "utility.h"

void print(const char* str){
    write(STDOUT, str, count_string(str));
}

//Takes input using read syscall
void take_input(const char* destination, size_t read_bytes){
    read(STDIN,destination,read_bytes);
}

size_t ask(const char* instruction, size_t size){
    print(instruction);
    char stdin[1024];
    take_input(stdin, size);
    stdin[size-1] = NEW_LINE;
    return size;
}
