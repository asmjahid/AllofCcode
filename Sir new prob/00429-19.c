#include<stdio.h>
int main()
{
int k,l,i,j,s;
printf("Enter the first number:");
scanf("%d",&k);
printf("\nEnter the second number:");
scanf("%d",&l);
printf("\n%d%d",k,l);
for(i=0;i<=13;i++)
{
s=k+l;
printf("%d ",j);
k=l;
l=j;
}
return 0;
}
