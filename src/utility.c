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


size_t count (int number){
    int number_size = 1;
    int num = number;
    while ( num > 9){
        number_size = number_size * 10;
        num = number / number_size;
    }
    return number_size;
}

size_t int_to_string(int number, char* dest){
    int number_size = count(number);
    int temp = 0;
    int last = number / number_size;
    int j = 0;
    int new;
    while(number_size > 0){
        last = number / number_size; 
        new = last - temp * 10;
        temp = last;
        dest[j] = (char)(new + 48);
        number_size = number_size / 10;
        j++;
    }
    dest[j] = '\0';

    return j;
}

void print_num(int num){
    char str_buffer[32];
    int_to_string(num,str_buffer);
    write(STDIN,str_buffer,count_string(str_buffer));
}



