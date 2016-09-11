#include<stdio.h>
main()
{
int a[10],n,i,large;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
large=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)
large=a[i];}
printf("largest element in the array id %d\n",large);

}
