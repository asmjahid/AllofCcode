 //Write a c program to find out the size and drive where file has stored of any given file?
#include "time.h"
#include "sys\stat.h"
#include "stdio.h"
int main(){
    struct stat status;
    FILE *fp;
    fp=fopen("test.txt","r");
    fstat(fileno(fp),&status);
    printf("Size of file : %d",status.st_size);
    printf("Drive name   : %c",65+status.st_dev);
    return 0;
}

Explanation
Function int fstat (char *, struct stat *) store the information of open file in form of structure struct stat

Structure struct stat has been defined in sys\stat.h as

struct stat {
    short  st_dev,   st_ino;
    short  st_mode,  st_nlink;
    int    st_uid,   st_gid;
    short  st_rdev;
    long   st_size,  st_atime;
    long   st_mtime, st_ctime;
};
