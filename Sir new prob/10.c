#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter the number=");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    for(i=0;i<n;i++)
    {
    printf("\t*");
    }
    printf("\n");
    }
}

