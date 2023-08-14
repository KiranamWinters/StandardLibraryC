#ifndef BASICIO_H
#define BASICIO_H

#include "system_calls.h"

#define STDIN 0
#define STDOUT 1
#define STDERR 2
#define NEW_LINE 10

extern char conv_buffer[32];
extern char stdin[1024];

void take_input(const char* destination, size_t read_bytes);
void print(const char *);
size_t ask(const char* instruction, size_t size);

#endif
