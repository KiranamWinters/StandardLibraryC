#include "socket.h"
#include "system_calls.h"
#include "basicio.h"
#include "utility.h"

void _start(){
  print("Hello_syscall\n\0");
  stat buffer = {0};
  stat* nu = stats("C:\\Users\\Kiranam\\OneDrive\\Desktop\\Projects\\WebServer\\src\\new.txt", &buffer);
  int num = buffer.st_ino;
  print_num(nu->st_atime);
  break_exec(0);
}

