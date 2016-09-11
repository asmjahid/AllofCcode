#include<stdio.h>
int main()
{
int k=0, num[10],l;
printf("Enter the ten numbers:");
while(k<10)
{
scanf("%d",&num[k]);
k++;
}
printf("\n\n");
for(l=9;l>=0;l--)
printf("%d",num[l]);
}
