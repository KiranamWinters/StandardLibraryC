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

void init_stats(stat* buf){
    buf->blockNumber = 0;
    buf->blockSize = 0;
    buf->describe_device = 0;
    buf->device_id = 0;
    buf->file_size = 0;
    buf->GroupID = 0;
    buf->hardlink = 0;
    buf->st_inode = 0;
    buf->UserID = 0;
    buf->st_mode = 0;
    timeSpec var1 = {0,0};
    timeSpec var2 = {0,0};
    timeSpec var3 = {0,0};
    buf->last_access_time = var1;
    buf->last_modified_time = var2;
    buf->last_statusChange_time = var3;
}


