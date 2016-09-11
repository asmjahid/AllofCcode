#include<stdio.h>
#include<string.h>
main()
{
    int i;
    char string[80];
    printf("enter any string:\n");
    scanf("%[^\n]",string);
    int length=strlen(string);
    string[length]=' ';
    string[length+1]=' ';
    string[length+2]=' ';
    length +=3;
  for(i=0;i<length;i++)
{
    printf("%c",string[i]);
}
    return 0;
}
