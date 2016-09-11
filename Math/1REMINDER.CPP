#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
int x,y,m=0,n=0;
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
m=x/y;
n=x%y;
printf("quotient=%d\nreminder=%d",m,n);
getch();
}
