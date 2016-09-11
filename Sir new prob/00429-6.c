#include<stdio.h>
int main()
{
int i;
float kwh,cost;
printf("Enter the kilowatt-hours:");
scanf("%f",&kwh);
if(kwh<=500)
cost=10;
else if(kwh>=501&&kwh<=1000)
cost=10.00+(kwh-500)*0.05;
else
cost=35.00+(kwh-1000)*0.03;
printf("\n\n used kwh\ncost($)\n");
printf("cost=");
printf("\n");
printf("\n%5.2lf\n%5.2lf\n",kwh,cost);
for(i=1;i<=1;i++)
printf("\n\n\n");
printf("cost=");
//printf("\n\nTotal cost=%5.2f",cost);
}
