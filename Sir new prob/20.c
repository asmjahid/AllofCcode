#include<stdio.h>
main()
{
    int q,r;
    char n[10];
    printf("Enter your name= ");
    scanf("%c",n);
    printf("Enter your number= ");
    scanf("%d",q);
    for(r=0;r<q;r++)
    printf("%c\n",n[r]);
}
