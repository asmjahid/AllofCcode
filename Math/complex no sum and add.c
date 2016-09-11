/* ADDITION & SUBTRACTION OF TWO COMPLEX NUMBERS USING C PROGRAM
C code:
1. Adding two complex numbers in c
2. C program for addition of two complex numbers
3. C program to add two complex numbers*/
#include<stdio.h>
int main(){
  int a,b,c,d,x,y;
  printf("\nEnter the first complex number:");
  scanf("%d%d",&a,&b);
  printf("\nEnter the second complex number:");
  scanf("%d%d",&c,&d);
  if(b<0)
      printf("%d-i\n",a-b);
  else
      printf("d+i\n",a+b);
  if(d<0)
      printf("d-i\n",c-d);
  else
      printf("%d+i\n",c+d);
  printf("\nADDITION ");
  x=a+c;
  y=b+d;
  if(y>0)
      printf("%d-i%d",x,-y);
  else
      printf("%d+i%d",x,+y);
  printf("\n\nSUBTRACTION ");
  x=a-c;
  y=b-d;
  if(y<0)
      printf("%d-i%d",x,-y);
  else
      printf("%d+i%d",x,+y);
  return 0;
}
