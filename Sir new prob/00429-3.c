#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three integer numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
if(a<c)
printf("\n\n%d is the minimum number.",a);
else
printf("\n\n%d is the minimum number.",c);
}
else
if(b<c)
printf("\n\n%d is the minimum number.",b);
else
printf("\n\n%d is the minimum number.",c);
printf("\n\n");
return 0;
}
