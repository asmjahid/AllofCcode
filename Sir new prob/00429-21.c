#include<stdio.h>
#include<string.h>
int main()
{
int k;
char *name;
printf("Enter your name:");
gets(name);
for(k=strlen(name);k>=0;k--)
{
putchar(name[k]);
}
return 0;
}
