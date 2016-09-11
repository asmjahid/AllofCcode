#include<stdio.h>
int main()
{
int num,i,j;
read:
printf("Enter a number:");
scanf("%d",&num);
while(num!=0)
{
for(i=0;i<num;i++)
{
printf("*");
}
printf("\nEnter a number:");
scanf("%d",&num);
}
return 0;
}
