#include<stdio.h>
main()
{
int ft,in;
float m;
printf("Enter your height in feet:");
scanf("%d", &ft);
printf("Enter your height in inch:");
scanf("%d" ,&in);
m=((ft *12)+in)*0.0254;
printf ("your height in metre: %f", m);
}
