//Calculate Your Love percentage
//21 years, 5 months, 4 weeks, 1 day
#include<stdio.h>
main()
{
int i,l1;
long int s1,s2,t;
char name1[10],name2[10];
void title(),del();
title();
printf("!!!!!!!!! %cPROGRAMMER JAHID!!!!!!!!! \n\n\n",3);
printf("Please Enter your name\n");
scanf("%s",name1);
printf("Please Enter your partner's name\n" );
scanf("%s",name2);
printf("Please wait Calculating.");
for(i=0;i<8;i++)
{
del();
}
title();
printf("Calculation completed");
title();
printf("Press any key to view result");

l1=0;
for(i=0;i<50;i++)
{
if (name1[i]!='\0')
{
l1++;
continue;
}
break;
}
s1=0;
for(i=0;i<l1;i++)
{
s1=s1+name1[i];
}
getch();
l1=0;
for(i=0;i<50;i++)
{
if (name2[i]!='\0')
{
l1++;
continue;
}
break;
}
s2=0;
for(i=0;i<l1;i++)
{
s2=s2+name2[i];
}
t=s1+s2;
while(t>100)
{
    t=t/10;
}
title();
printf("the result is %ld%",t);
getch();
}
