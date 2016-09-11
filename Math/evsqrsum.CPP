#include<stdio.h>

main()
{
	int i=0,n,sum=0;
	scanf("%d",&n);
	loop:
		sum=sum+i*i;
		i+=2;
		if(i>n)
		{
			goto exitpro;
		}
		goto loop;
	exitpro:
		printf("%d",sum);
	return 0;
}
