 #include<stdio.h>
main()
{
    int num,i;
    char c;
    printf("Enter your charecter=");
    scanf("%c",&c);
    printf("Enter your number=");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    printf("%c\n",c);
}
