#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arow,acolumn,brow,bcolumn,i,j,k;
    float sum;
    float a[10][10],b[10][10],c[10][10];

    printf("ENTER THE ROW AND COLUMN FOR A:\n");
    scanf("%d %d",&arow,&acolumn);
    printf("ENTER THE VALUE FOR A:\n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acolumn;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("ENTER THE ROW AND COLUMN FOR B:\n");
    scanf("%d %d",&brow,&bcolumn);

    printf("Enter the value for B:\n");
    for(i=0;i<brow;i++)
    {
        for(j=0;j<bcolumn;j++)

        {
            scanf("%f",&b[i][j]);
        }
    }

    for(i=0;i<arow;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
            sum=0;
            for(k=0;k<brow;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }

    printf("Now the output is:\n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
            printf("%.1f  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
