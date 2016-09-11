#include<stdio.h>

main()
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    loop:
        sum=sum+i*i;
        i++;
        if(i>n)
        {
            goto exitpro;
        }

        goto loop;
    exitpro:
    printf("%d",sum);

    getch();
    return 0;
}
