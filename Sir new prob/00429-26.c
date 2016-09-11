#include<stdio.h>
int main()
{
int num[10],k,l;
k=0;
printf("Enter the ten numbers:");
while(k<10)
{
scanf("%d",&num[k]);
k++;
}
for(k=0;k<3;k++)
{
for(l=0;l<10;l++)
printf("%d",num[l]);
printf("\n");
}
return 0;
}
