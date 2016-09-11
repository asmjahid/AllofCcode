#include<stdio.h>
int main()
{
float weight,height,quetelet;
printf("Enter the weight:");
scanf("%f",&weight);
printf("Enter the height:");
scanf("%f",&height);
quetelet=weight/(height*height);
if(quetelet<20)
printf("\n\nUnder weight");
else if(quetelet>=20&&quetelet<25)
printf("\n\nhealthy weight");
else if(quetelet>=20&&quetelet<25)
printf("\n\nmildly over-weight");
else if(quetelet>=30&&quetelet<40)
printf("\n\nvery over-weight");
else
printf("\n\nextremely over-weight");
return 0;
}
