//Code for PROGRAM OF DECIMAL TO BINARY CONVERSION in C Programming

#include<stdio.h>
int i=0,bin[100];
main()
{
    int j=0;
    int read(),destobin();
    j=read();
    destobin(j);
    getch();
}

int read()
{
    int num;
    printf("\n PLEASE ENTER THE VALUE IN DECIMAL ( 0 - 9 ): ");
    scanf("%d",&num);
    return(num);
}

int destobin(int j)
{
    for(i=0;j>0;i++)
    {
        bin[i]=j%2;
        j=j/2;
    }
    i--;
    printf("\nDECIMAL TO BINARY CONVERSION IS \t");
    for(i;i>=j;i--)
        printf("%d",bin[i]);
}
