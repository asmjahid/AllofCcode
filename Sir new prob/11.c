#include<stdio.h>
main()
{
    int n,j,k;
    printf("Enter the number=");
    scanf("%d",&n);
    for(j=1; j <=10 ; j++)
{
    k=n*j;
    printf("%3d times%3d=%d\n",j,n,k);
}
}


