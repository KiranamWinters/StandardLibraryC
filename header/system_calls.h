#ifndef SYSTEM_CALLS_H
#define SYSTEM_CALLS_H

#define NULL 0
#define SYSREAD 0
#define SYSWRITE 1
#define SYS_OPEN_FILE 2
#define STAT 4

#define MEMORY_MAP 9

#define SOCKET 41
#define CONNECT 42
#define BIND 49
#define LISTEN 50

#define SYSEXIT 60

#define O_CREATE 0100
#define F_WRITE 0200

typedef unsigned long size_t;
typedef unsigned short umode_t;
typedef unsigned int time_t;

typedef struct  timeSpec  //time specification in seconds and nanoseconds
{
    time_t time_seconds;
    time_t time_nano_seconds;
} timeSpec;

struct s_stat{
    unsigned short st_mode;
    unsigned int st_inode;  //inode stores the information about a file | This variable stores the id of inode
    unsigned short device_id; //tells us in which device our file is
    unsigned short describe_device;  //particular file represents particular device
    int hardlink;
    unsigned int UserID;
    unsigned int GroupID;
    unsigned int file_size;   //size of the file
    timeSpec last_access_time;
    timeSpec last_modified_time;
    timeSpec last_statusChange_time; //last time permission|status was changed
    unsigned long blockSize; 
    unsigned long blockNumber; //tells us number of block which is divisible by 512
};

typedef struct s_stat stat;

void break_exec(int);
size_t write(unsigned int, const char*, size_t);
size_t read(unsigned int, const char*, size_t);
size_t count (int number);
int open(const char* , int, umode_t );
int stats(const char* filepath, stat* buff);


#endif
