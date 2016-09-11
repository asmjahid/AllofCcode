//Code for PROGRAM TO FIND ANSWER OF THE FOLLOWING SERIES. SUM=e1+e2+e3+... in C Programming


#include<stdio.h>
#include<math.h>
      void main()
{
    longint i,n;
    double sum=0;
    printf("\n ENTER THE VALUE OF N: ");
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
        sum=sum+exp(i);
        textcolor(RED);
        printf("\n");
        cprintf(" THE SUM OF THIS SERIES IS %7.2lf\n",sum);
    getch();

}
