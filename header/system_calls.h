#ifndef SYSTEM_CALLS_H
#define SYSTEM_CALLS_H

#define NULL 0
#define SYSREAD 0
#define SYSWRITE 1

#define MEMORY_MAP 9


#define SOCKET 41
#define CONNECT 42
#define BIND 49
#define LISTEN 50

#define SYSEXIT 60

typedef unsigned long size_t;

void break_exec(int);
size_t write(unsigned int, const char*, size_t);
void read(unsigned int, const char*, size_t);


#endif