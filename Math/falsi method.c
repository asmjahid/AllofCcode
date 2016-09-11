//False Position Method or Regula Falsi Method//
#include<stdio.h>
#include<math.h>
float f(float x)
{
return (x*x*x-5*x+1);
}
int main()
{
int itr=0, maxitr;
float x1,x2,x3,x4,aerr;
printf("\nProgram to find Root of an Equation by Regula falsi Method\n\n");
printf("\nEnter value of x0, x1, allowed error and maximum iteration\n");
scanf("%f %f %f %d", &x1, &x2, &aerr, &maxitr);
x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
printf("\n\nIn iteration %d, Value of x3 =\t%f",itr+1,x3);
do
{
if (f(x1)*f(x3)<0)
x2=x3;
else
x1=x3;
x4=x3;
x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
itr++;
printf("\nIn iteration %d Value of x=\t%f", itr+1,x3);
if (fabs(x4-x3)<aerr)
{
printf("\n\nAfter %d iteration, Root= %f", itr,x4);
getch();
return 0;
}
}
while (itr<maxitr);
printf("\n\nSolution does not converge Iteration not sufficient");
return 1;
}
