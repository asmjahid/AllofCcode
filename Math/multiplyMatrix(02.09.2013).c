#include<stdio.h>
#define max 10
void multiplyMatrix(int [max] [max],int [max][max]);
int m,n,o,p; int c[max][max];
int main()
{
    int a[max][max],b[max][max],i,j,k;
    printf("Enter the row and column of first matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the row and column of second matrix: ");
    scanf("%d %d",&o,&p);
    if(n!=o)
{
    printf("Matrix multiplication is not possible");
    printf("\nColumn of first matrix must be same as row of second matrix");
}
    else
{
    printf("Enter the First matrix: ");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("Enter the Second matrix: ");
    for(i=0;i<o;i++)
    for(j=0;j<p;j++)
    scanf("%d",&b[i][j]);
}
    multiplyMatrix(a,b);
    printf("\nThe multiplication of two matrix is: \n");
    for(i=0;i<m;i++)
{
    printf("\n");
    for(j=0;j<p;j++)
{
    printf("%d\t",c[i][j]);
}
}
    return 0;
}
void multiplyMatrix(int a[max] [max],int b[max][max])
{
    static int sum,i=0,j=0,k=0;
    if(i<m)
{
    if(j<p)
{
    if(k<n)
{
    sum=sum+a[i][k]*b[k][j];
    k++;
    multiplyMatrix(a,b);
}
    c[i][j]=sum;
    sum=0;
    k=0;
    j++;
    multiplyMatrix(a,b);
}
    j=0;
    i++;
    multiplyMatrix(a,b);
}
}
