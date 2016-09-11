#include<stdio.h>
int main()
{
float feet,inch,meter;
printf("Enter your height:\n\n|-->feet(s):");
scanf("%f",&feet);
printf("\n\t|-->inch(s):");
scanf("%f",&inch);
meter=(feet*12*0.0254)+(inch*0.0254);
printf("\n\nYour height is %5.2f meter(s).\n\n",meter);
return 0;
}
