#include<stdio.h>
int main()
{
int num[20],x,y,z;
printf("Enter 20 integers:");
for(x=0;x<10;x++)
scanf("%d",&num[x]);
for(x=0;x<10;x++)
{
for(y=0;y<10;y++)
{
if(num[y]<=num[y+1])
{
z=num[y];
num[y]=num[y+1];
num[y+1]=z;
}
}
}
for(y=9;y>=0;y)
printf("%d",num[y]);
return 0;
}
