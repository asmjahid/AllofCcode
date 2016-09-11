#include<stdio.h>
main()
{
int mat1[3][3],mat2[3][3];
int i,j;
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d  %d",&mat1[i][j],&mat2[i][j]);
}}
printf("\n\n");
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d+%d=%d\t",mat1[i][j],mat2[i][j],mat1[i][j]+mat2[i][j]);
}
printf("\n");
}
}
