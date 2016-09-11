#include <stdio.h>
main()
{
          int a,b,c,i,n;
          a=0;
          b=1;
          printf("Enter n for how many times generate series:");
          scanf("%d",&n);
          printf("FIBONACCI SERIES\n");
          printf("\t%d\t%d",a,b);
          for(i=0;i<n;i++)
{
             c=a+b;
             a=b;
             b=c;
             printf("\t%d",c);
         }
    }
