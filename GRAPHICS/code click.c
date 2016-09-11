#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
main()
{
char ch;
system("color 2a");
printf("Do you want to shutdown your computer now (y/n)\n");
scanf("%c",&ch);
if (ch == 'y' || ch == 'Y')
system("C://Program Files(x86)//codeblocks.exe");
else
{
    printf("Thanks next time will see\n\n");
}
return 0;
}
