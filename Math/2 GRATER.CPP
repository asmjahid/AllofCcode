#include<stdio.h>
//#include<conio.h>
main()
{
	//clrscr();

	int a,b;

	printf("a=");
	scanf("%d",&a);

	printf("b=");
	scanf("%d",&b);

	if(a>b)
		printf("a is greater than b");
	else if (a==b)
		printf("a is equal b");
	else
		printf("b is greater than a");
	//getch();
}
