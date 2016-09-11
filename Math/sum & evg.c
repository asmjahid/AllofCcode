#include<stdio.h>
main()
{
int i,x,count=0,countother=0,n;
float sum=0.0,sumother=0.0, avg=0.0;
{
printf("How many numbers to sum:");
scanf("%d", &n);
}
while (count<n)
{
printf("number= ");
scanf("%d", &x);
if (x%3==0 && x%5==0)
sum+=x;
count++;
printf("sum=%f\n",sum);
avg=sum/count;
printf("avg=%f",avg);
else
sumother += x;
countother++;
printf ("sumother = %f \n", sumother);
avg=sumother/n;
printf("avg is %f, avg",avg);}
}
}
