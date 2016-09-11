#include<stdio.h>
main()
{
    int n,i=2,j=1;
    scanf("%d",&n);
if(i<n)
{
       while(i<n)
    {
        if(n%i==0)
        {
                j=0;
                break;
        }
        else
        i++;
    }

    if(j==0)
    printf("not prime");
    else
    printf("prime");
}
   else
   printf("not prime");
    return 0;
}
