#include<stdio.h>
main()
{
char mainstr[100],insstr[30],temp [50];
int l1,l2,l,i,j,pos;
printf("Enter a main string:");
gets(mainstr);
printf("Enter the sub string:");
gets(insstr);
printf("\n Enter the position to be inserted:");
scanf("%d",&pos);
l2=strlen(insstr);
l1=strlen(mainstr);
if(pos>l1)
{
for(i=0;i<l2;i++)
mainstr[i++]=insstr[i];
}
else
{
for(i=0;i<pos;i++)
temp[i]=mainstr[i];
for(j=0;j<l2;j++,i++)
temp[i]=insstr[j];
for(j=pos;j<l1;j++,i++)
temp[i]=mainstr[j];
temp[i]=NULL;
printf("After insertion the string is:");
puts(temp);
}
}
