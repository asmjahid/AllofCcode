#include<stdio.h>
int main()
{
float centigrade,fahrenheit;
printf("Enter today's temperature in centigrade:");
scanf("%f",&centigrade);
fahrenheit=centigrade*1.8+32;
printf("\n%5.2f centigrade=%5.2f fahrenheit\n\n",centigrade,fahrenheit);
return 0;
}
