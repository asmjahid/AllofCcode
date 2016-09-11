#include<stdio.h>
int main()
{
int i, num;
printf("Enter a number:");
scanf("%d",&num);
for(i=1;i<=num*num;i++)
{
printf("*");
if(i%num==0)
printf("\n");
}
return 0;
}
