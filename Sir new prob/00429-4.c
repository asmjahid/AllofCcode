#include<stdio.h>
int main()
{
int i;
double sale,com,pay;
printf("Enter the sale value:");
scanf("%f",&sale);
if(sale<=100)
com=0;
else
if(sale>=101&&sale<=1000)
com=0.2;
else
com=0.3;
pay=sale-(sale*com);
com=sale-pay;
printf("\n\n sale value\t commission\tpay\n");
printf("-|------------|------|---------|-");
printf("\n| | | |");
printf("\n %5.2lf\t%5.2lf\t\%5.2lf\n",sale,com,pay);
for(i=1;i<=1;i++);
printf("-|---------|-------|-------|-");
return 0;
}
