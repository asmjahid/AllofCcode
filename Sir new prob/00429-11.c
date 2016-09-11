#include<stdio.h>
int main()
{
int num,i;
printf("Enter a number:");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
if(i<10)
printf("0");
printf("%d times %d =%d\n",i,num,i*num);
}
return 0;
}
