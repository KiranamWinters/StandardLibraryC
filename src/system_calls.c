#include "basicio.h"

//fd = file descriptor
// 0 = STDIN | 1 = STDOUT | 2 = STDERR

//0 stands for success so no error code generates for 0

//breaks execution and returns error code 
//syscall - exit
//rax - 60 | rdi - error_code
void break_exec(int error_code){

    asm volatile
        (
            "syscall"
            :
            :"a"(SYSEXIT), "D"(error_code) 
        );
}

//writes src to console
//syscall - write
//rax - 01 | rdi - fd | rsi = src | rdx = count/size
size_t write(unsigned int fd, const char* src, size_t count){
    
    asm volatile
        (
            "syscall"
            :
            :"a"(SYSWRITE), "D"(fd), "S"(src), "d"(count)
        );
    if (src == NULL)
        return -1;
    else
        return count;
}


//Reads value according to file descriptor
//syscall - read
//rax - 0 | rdi - file descriptor | rsi - place to store read data | rdx - size of counted data
void read(unsigned int fd, const char* buffer, size_t count){
    asm volatile
        (
            "syscall"
            :
            :"a"(SYSREAD), "D"(fd), "S"(buffer), "d"(count)

        );
}

