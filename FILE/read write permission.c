 //Write a c program to know read/write permission of given file.
#include "time.h"
#include "sys\stat.h"
#include "stdio.h"
void main(){
    struct stat status;
    FILE *fp;
    stat("test.txt",&status);
    if (status.st_mode & S_IREAD)
         printf("You have read permission.\n");
    if (status.st_mode & S_IWRITE)
         printf("You have write permission.");
}
