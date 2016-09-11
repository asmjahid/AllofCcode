#include <stdio.h>
int main()
  {
    int i,j=2,ch=0;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&i);
    while(j <= i/2)
    {
        if(i%j == 0)
        {
            printf("%d ,IS NOT PRIME",i);
            ch=1;
            break;
        }}}
