//MD.JAHID
//ID-12-023-1-02-00419
#include<stdio.h>
int main()
{
int x,count=0,n;
float sum=0.0,avg=0.0;

printf("How many num to sum:");
scanf("%d", &n);

while(count <n )
{
printf("num=");
scanf("%d", &x);
if(x%3==0 && x%5==0)
sum +=x;
count++;
}

printf ("sum = %f \n", sum);

avg=sum/n;

printf("avarage is %f, avg",avg);

}
