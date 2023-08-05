#include "basicio.h"
#include "utility.h"

void print(const char* str){
    write(1, str, count_string(str));
}

//Takes input using read syscall
void take_input(const char* destination, size_t read_bytes){
    read(0,destination,read_bytes);
}
