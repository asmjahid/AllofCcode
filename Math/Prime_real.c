#include<stdio.h>
main()
{
    int n,rem,i=2,tag=1;
    printf("Enter The Number:");
    scanf("%d",&n);
    tag=1;
    for(i=2;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            tag=0;
            break;
        }

    }
    if(n==0)
    {
        printf("The Number Is Not Prime");
    }
    else if(n==1)
    {
        printf("The Number Is Not Prime");
    }

    else if(tag==0)
    {
        printf("The Number Is Not Prime");
    }
    else if(tag==1)
    {
        printf("The Number Is Prime");
    }
}
