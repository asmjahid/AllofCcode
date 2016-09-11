 //C program to extract last two digits of a given year and print it
#include<stdio.h>
int main(){
  int yyyy,yy;
  printf("Enter a year in for digits: ");
  scanf("%d",&yyyy);
  yy = yyyy % 100;
  printf("Last two digits of year is: %02d",yy);
  return 0;
}
