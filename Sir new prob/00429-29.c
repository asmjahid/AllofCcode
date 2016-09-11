#include<stdio.h>
int main()
{
int num[10],i,max;
printf("Enter 10 integer numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&num[i]);
}
max=num[0];
for(i=0;i<10;i++)
{
if(max>num[i]);
else
max=num[i];
}
for(i=0;i<10;i++)
{
if(num[i]==max)
continue;
else
printf("%d",num[i]);
}
return 0;
}
