#include<stdio.h>
#include<string.h>
int main()
{
int length,i,j=0,k,n,midpoint;
char sen[100];
printf("Enter your name:");
gets(sen);
length=strlen(sen);
if(length%2==0)
midpoint=length/2;
else
midpoint=length/2 +1;
for(i=0;i<midpoint;i++)
{
if(sen[i]!=sen[length-1-i])
{
j=1;
break;
}
else
j=0;
}
if(j==0)
printf("\n\nIt is a palindrome");
else
printf("\n\nNot a palindrome");
return 0;
}
