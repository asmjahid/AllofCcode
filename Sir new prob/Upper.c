#include <stdio.h>
main()
{
int tag, count;
char text[10];
for(count=0;count<10;count++)
{
scanf("%s",&text[count]);
tag=count;
}
printf("\n");
for(count=0;count<tag;count++)
{
printf("%s",toupper(text[count]));
printf("\n");
}
}
