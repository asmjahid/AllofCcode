//Code for Program to find area of rectangular in C Programming

#include<stdio.h>
main()
{
    float  length,breadth,area;
    printf("The length of rectangular  :");
    if(scanf("%f",&length)==1)
    {
        printf("The breadth of rectangular :");
        if(scanf("%f",&breadth)==1)
        {
            area=length*breadth;
            printf("The area of rectangular is :%f :",area);
        }
        else
        {
            printf("error,enter correct value");
        }
    }
    else
    {
        printf("error,enter correct value");
    }
}
