#include<stdio.h>
#include<string.h>
main()
{
    char str[50],revstr[50];
    int i=0,j=0;
    printf("Enter the string to be reversed:");
    gets(str);
    for(i=strlen(str)-1; i>=0; i--)
    {
        revstr[j]=str[i];
        j++;
    }
    revstr[j]='\0';
    printf("\nReversed String : %s",revstr);
}
