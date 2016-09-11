#include<stdio.h>
int main()
{
int num=0,i,sum=0;
for(i=num;num!=-1;i++)
{
printf("Enter a number:");
scanf("%d",&num);
sum=sum+num;
}
printf("\n\ntotal=%d",sum+1);
return 0;
}
