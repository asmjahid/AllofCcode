#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
main()
{
char ch;
system("color 42");
printf("Do you want to shutdown your computer now (y/n)\n");
scanf("%c",&ch);
if (ch == 'y' || ch == 'Y')
system("C:\\WINDOWS\\System32\\shutdown.exe /r");
else
{
    printf("Thanks next time will see\n\n");
}
return 0;
}
