#include<stdio.h>
#include<conio.h>
void main(){clrscr();
int a,b,x,y,t,lcm;
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
a=x;
b=y;
while(b!=0){
b=t;
b=a%b;
a=t;
}
lcm=(x*y)/a;
printf("lcm=%d",lcm);
getch();}