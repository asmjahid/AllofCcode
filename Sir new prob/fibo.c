#include<stdio.h>
void myFibo(int lastNum,int num)
{
   printf("%d, ", lastNum);
   if(num < 400)
   myFibo(num, lastNum+num);
}
    int main()
{
    myFibo(0,1);
}
