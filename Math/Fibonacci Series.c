#include <stdio.h>
void main()
{
  long long int a,b,c,i,n;
  a=0;
  b=1;
  printf("\n Enter n for how many times generate series");
  scanf("%d",&n);
  printf("\n FIBONACCI SERIES \n");
  printf("\t%ld\t%ld",a,b);
  for(i=0; i<n; i++)
    {
      c=a+b;
      a=b;
      b=c;
      printf("\t%ld",c);
    }
    getch();
}
