#include <stdio.h>
    #include <conio.h>
    void main()
    {
          int a,b,c,i,n;
          a=0;
          b=1;
          printf("\n Enter n for how many times generate series");
          scanf("%d",&n);
          printf("\n FIBONACCI SERIES \n");
          printf("\t%d\t%d",a,b);
          for(i=0;i<n;i++)
         {
             c=a+b;
             a=b;
             b=c;
             printf("\t%d",c);
         }
         getch();
    };
