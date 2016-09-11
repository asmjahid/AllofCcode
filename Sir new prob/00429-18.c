#include<stdio.h>
int main()
{
int num1,dif,j,temp;
printf("Enter a number:");
scanf("%d",&num1);
temp=num1;
for(j=0;num1>=0;j++)
{
printf("\nEnter a number:");
scanf("%d",&num1);
dif=num1-temp;
if(num1>=0)
printf("\nDifference is %d", dif);
temp=num1;
printf("\n");
}
return 0;
}
