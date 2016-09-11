//C program for Arranging  10 Numbers in Ascending Order
#include<stdio.h>
main()
{
int a[10],i,j,t;
printf("Enter 10 nos.\n\n");
for (i=0;i<10;i++)
scanf("%d",&a[i]);
for (i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("Ascending Order is:");
for(j=0;j<10;j++)
printf("\n%d",a[j]);
getch();
}
