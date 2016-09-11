#include<stdio.h>
int add()
{
int a,b,c;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d + %d = %d",a,b,c);
return 0;
}
int sub()
{
int a,b,c;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
c=a-b;
printf("%d - %d= %d",a,b,c);
return 0;
}
int mult()
{
int a,b,c;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
c=a*b;
printf("%d X %d = %d",a,b,c);
return 0;
}
int div()
{
int a,b,c;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
c=a/b;
printf("%d / %d = %d",a,b,c);
return 0;
}
main()
{
    return add(),sub(),mult(),div();
}
