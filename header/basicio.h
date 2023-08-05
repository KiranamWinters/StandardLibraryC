#ifndef BASICIO_H
#define BASICIO_H

#include "system_calls.h"

typedef const char* string;

void take_input(const char* destination, size_t read_bytes);
void print(const char *);

#endif
