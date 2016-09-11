#include <stdio.h>
int main()
{
    int number[10],c,m;
        printf("Enter the number= ");
    for (m=0;m<10;m++)
{
    scanf("%d",&number[m]);
}
    for (m=0;m<3;m++)
{
    for (c=0;c<10;c++)
    printf("%5d",number[c]);
    printf("\n");
}
}
