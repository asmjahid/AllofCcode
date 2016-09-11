#include<stdio.h>
#include<string.h>
main()
{
    char string[80];
    scanf("%[^\n]",string);
    printf("%s",string);
    printf("\n");
    printf("%c",string[0]);
    printf("\n");
    printf("%c",string[4]);
    printf("\n");
    scanf("%s",string);
    printf("%d",strlen(string));
    return 0;
}
