#include<stdio.h>
#include<conio,h>
void main(){clrscr();
long int i,n,r,x=1,y=1,z=1;
float ncr;
scanf("%ld\n%ld",&n,&r);
for(i=1;i<=n;i++){
x=x*i;}
for(i=1;i<=r;i++){
y=y*i;}
for(i=1;i<=(n-r);i++){
z=z*i;}
ncr=x/y*z;
printf("result=%f",ncr);
getch();}