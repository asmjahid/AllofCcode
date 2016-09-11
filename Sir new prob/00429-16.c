#include<stdio.h>
int main()
{
int start[2],end[2],result[2],temp;
printf("Enter start time:");
scanf("%d%d",&start[0],&start[1]);
printf("\nEnter finish time:");
scanf("%d%d",&end[0],&end[1]);
result[0]=(start[0]*3600)+(start[1]*60);
result[1]=(end[0]*3600)+(end[1]*60);
temp=result[1]-result[0];
result[0]=temp/3600;
result[1]=(temp-(result[0]*3600))/60;
printf("\n\n%d hours %d minutes",result[0],result[1]);
return 0;
}
