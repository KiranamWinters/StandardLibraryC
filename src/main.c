#include "socket.h"
#include "system_calls.h"
#include "basicio.h"
#include "utility.h"

void _start(){
  print("Hello_syscall\n\0");
  break_exec(0);
}

