//Write a c program to find smallest among three numbers using conditional operator

#include<stdio.h>
int main()
{
  int a,b,c,smallest;
  printf("Enter 3 numbers:");
  scanf("%d %d %d",&a,&b,&c);

  smallest=(a<b && a<c?a:b<c?b:c);
  printf("The smallest number is: %d",smallest);

  return 0;
}
