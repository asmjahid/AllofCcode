//Write a c program or code to find out the sum of series 1^3 + 2^3 + …. + n^3 that is sum of cube of n natural numbers.

#include<stdio.h>
#include<math.h>

int main(){

    int n,i;
    int sum=0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);

    sum = pow(((n * (n + 1) ) / 2),2);

    printf("Sum of the series : ");

    for(i =1;i<=n;i++){
         if (i != n)
             printf("%d^3 + ",i);
         else
             printf("%d^3 = %d ",i,sum);
    }

    return 0;
}
