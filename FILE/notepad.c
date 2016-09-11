#include <stdio.h>
#include <stdlib.h>
main()
{
char ch;
printf("Do you want to open your notepad now (y/n)\n;");
scanf("%c",&ch);
if (ch == 'y' || ch == 'Y')
system("C:\\Windows\\notepad.exe");
else
{
    printf("Thanks");
}
return 0;
}
