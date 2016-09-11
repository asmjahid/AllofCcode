#include<stdio.h>
main()
{
int i=8,j=5;
i-=(j>0) ?  j: 0;
printf("%d", i);
}
