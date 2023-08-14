#include "socket.h"
#include "system_calls.h"
#include "basicio.h"
#include "utility.h"

void _start(){
  print("Hello_syscall\n\0");
  stat* buffer = {0};
  stats("C:\\Users\\Kiranam\\OneDrive\\Desktop\\Projects\\WebServer\\src\\new.txt", buffer);
  print_num(buffer->blockSize);
  break_exec(0);
}

