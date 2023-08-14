#ifndef UTILITY_H
#define UTILITY_H

#include "basicio.h"

int count_string(const char * str);
void clear_buffer(char* buffer, int size);
size_t int_to_string(int number, char* dest);
void print_num(int num);
void init_stats(stat* buf);

#endif
