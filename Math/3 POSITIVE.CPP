#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
printf("enter the no. of n:");
scanf("%d",&n);
if(n>0)
printf("n is positive no.");
else if(n<0)
printf("n is negative no.");
else
printf("n is neutral no.");
getch();
}