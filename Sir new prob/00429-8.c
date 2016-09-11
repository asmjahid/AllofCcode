#include<stdio.h>
int main()
{
int num, i;
char letter;
printf("Enter a character:");
letter=getchar();
printf("Enter a number:");
scanf("%d",&num);
printf("\n\n");
for(i=0;i<num;i++)
printf("%c\n",letter);
}
