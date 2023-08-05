#include "utility.h"
#include "basicio.h"

//counts characters till it hits the specific characters 
//namely \0 
int count_string(const char * str){
    int count = 0;
    while (str[count] != '\0'){
        count++;
    }
    return count;
}

//Clears buffers 
void clear_buffer(char* buffer, int size)
{
    for (int i = 0; i < size; i++)
    {
        buffer[i] = NULL;
    }
}


