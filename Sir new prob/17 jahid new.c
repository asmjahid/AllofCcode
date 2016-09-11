#include<stdio.h>
main()
{
int mat[3][3];
int i,j;
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&mat[i][j]);
}}
printf("\n");
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
}
