 //WRITE A C PROGRAM TO FIND SIZE OF A FILE
#include <time.h>
#include <sys\stat.h>
#include <stdio.h>
void main()
{
    struct stat status;
    FILE *fp;
    fp=fopen("test.txt","r");
    fstat(fileno(fp),&status);
    printf("Size of file : %d",status.st_size);
    printf("Drive name   : %c",65+status.st_dev);
    return 0;
}
