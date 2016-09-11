#include<stdio.h>
main()
{
    int x,y,i=1,multi=1;
    scanf("%d %d",&x,&y);
   while(i<=y)
   {
       multi=multi*x;
       i++;
   }
   printf("%d",multi);
   return 0;
}
