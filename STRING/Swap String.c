#include<stdio.h>
#include<string.h>
#include<malloc.h>
main()
{
    char first[100], second[100], *temp;
    printf("Enter the first string ");
    gets(first);
    printf("Enter the second string ");
    gets(second);
    printf("\nBefore Swapping\n");
    printf("First string: %s\n",first);
    printf("Second string: %s\n\n",second);
    temp = (char*)malloc(100);
    strcpy(temp,first);
    strcpy(first,second);
    strcpy(second,temp);
    printf("After Swapping\n");
    printf("First string: %s\n",first);
    printf("Second string: %s\n",second);
    getch();
    return 0;
}
