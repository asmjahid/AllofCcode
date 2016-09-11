#include<stdio.h>
int main()
{
float avg,sum,num[10];
int i;
sum=0;
printf("Enter 10 numbers:");
for(i=0;i<10;i++)
{
scanf("%f",&num[i]);
sum=sum+num[i];
}
avg=sum/10;
printf("Average=%5.1f",avg);
printf("\nThose number's below the average");
for(i=0;i<10;i++)
{
if(avg>num[i])
printf("%d",(int)num[i]);
}
getch();
return 0;
}
