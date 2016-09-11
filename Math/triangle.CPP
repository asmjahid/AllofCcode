#include<stdio.h>

main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1,k=1;i<=n;i++,k+=2)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=k;j++)
		{
			printf("*");
		}
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
