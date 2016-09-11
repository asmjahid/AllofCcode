#include<stdio.h>
void main()
{
int a[10],n,i,large,small;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
large=a[0];
small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)
large=a[i];
if(a[i]<small);
small=a[i];}
printf("largest element in the array id %d\n",large);
printf("smallest element in the array is %d\n",small);
}
