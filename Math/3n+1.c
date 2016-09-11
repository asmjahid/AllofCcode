#include<stdio.h>
int abc(int n);
main()
{
    int n;
    scanf("%d",&n);
    int count=abc(n);
    printf("%d",count);
    return 0;
}
    int abc(int n)

    {
        int count=1;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
             n=n*3+1;
            }
         count++;
        }
        return (count);
    }
