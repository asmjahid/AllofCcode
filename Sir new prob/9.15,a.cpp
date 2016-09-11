#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column,i,j,sum;
    int a[100][100],x[100];
    int c[100];

    printf("ENTER THE ROW AND COLUMN FOR A :\n");
    scanf("%d %d",&row,&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE ROW AND COLUMN FOR X:\n");
    for(i=0;i<column;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<column;j++)
        {
            sum+=a[i][j]*x[j];
        }
        c[i]=sum;
    }

    printf("NOW THE OUTPUT IS:\n:");
    for(i=0;i<row;i++)
    {
        printf("%d  ",c[i]);
    }
    return 0;
}



