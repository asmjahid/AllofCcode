#include<stdio.h>

main()
{
	int m,n,i=2,cop=1,loop;
	scanf("%d %d",&m,&n);
	if(m>n)
	{
		loop=n;
	}
	else
		loop=m;
	while(i<=loop)
	{
		if(m%i==0 && n%i==0)
		{
			cop=0;
			break;
		}
		else
			i++;
	}
	if(cop==1)
		printf("coprime");
	else
		printf("not coprime");
	return 0;
}
