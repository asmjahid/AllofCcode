#include<stdio.h>

main()
{
    int x=1,y=1,i=1,mul=1;
    scanf("%d %d",&x,&y);
    while(i<=y)
    {
        mul=mul*x;
        i++;
    }
    printf("%d",mul);

    getch();
    return 0;

}
