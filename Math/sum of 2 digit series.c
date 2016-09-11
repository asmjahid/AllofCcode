 //Write a c program to find out the sum of series 1^2 + 2^2 + …. + n^2.

//Sum of 1^2 + 2^2 + …. + n^2 series in c programming language

#include<stdio.h>

int main(){

    int n,i;
    int sum=0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);

    sum = (n * (n + 1) * (2 * n + 1 )) / 6;

    printf("Sum of the series : ");

    for(i =1;i<=n;i++){
         if (i != n)
             printf("%d^2 + ",i);
         else
             printf("%d^2 = %d ",i,sum);
    }

    return 0;
}
