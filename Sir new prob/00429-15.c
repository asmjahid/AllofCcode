#include<stdio.h>
int main()
{
int num[50],i,j=0;
for(i=0;i!=-1;j++)
{
printf("Enter the mark:");
scanf("%d",&num[j]);
i=num[j];
}
printf("\nThe numbers of passes:\n");
for(i=0;i<j-1;i++)
{
if(num[j]>=50)
printf("%d",num[i]);
}
printf("\nThe number of fails:\n");
for(i=0;i<j-1;i++)
{
if(num[j]<50)
printf("%d",num[i]);
}
return 0;
}
