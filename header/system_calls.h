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

struct s_stat {
	unsigned short st_dev;
	unsigned short st_ino;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned short st_uid;
	unsigned short st_gid;
	unsigned short st_rdev;
	unsigned long  st_size;
	unsigned long  st_atime;
	unsigned long  st_mtime;
	unsigned long  st_ctime;
};



typedef struct s_stat stat;

void break_exec(int);
size_t write(unsigned int, const char*, size_t);
size_t read(unsigned int, const char*, size_t);
size_t count (int number);
int open(const char* , int, umode_t );
stat* stats(const char* filepath, stat* buff);


#endif
