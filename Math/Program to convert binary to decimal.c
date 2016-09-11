//Code for Program to convert binary to decimal in C Programming

#include<stdio.h>
void main()
{
    int j=1,i=0;
    int k,num[100],n,sum=0;
    clrscr();
    printf("\n PLEASE ENTER VALUE N:");
    scanf("%d",&n);
    printf("\n PLEASE ENTER IN THE BINARY (0 - 1): ");
    for(k=0;k<n;k++)
    {
    printf("\n\tnum[%d]= ",k+1);
    scanf("%d",&num[k]);
    if(num[k]>1)
    {
        printf("\n YOU ARE NOT ENTER BINARY NUMBER");
        goto end;
    }
    }
    for(k=n-1;k>=0;k--)
    {
        sum=sum+(num[k]*j);
        j=j*2;
    }
    printf("\n BINARY TO DECIMAL CONVERSION IS ");
        printf("%d",sum);
end:
getch();
}
