//Write a c program which takes password from users
//C source code for password:
#include<stdio.h>
#include<windows.h>
#define MAX 500
main()
{
    char password[MAX];
    char p;
    int i=0;
    system("color A1");
    printf("\t\t\t%c%c%cPASSWORD ENCRYPTION PROGRAMME%c%c%c\t\t\t",3,3,3,3,3,3);
    printf("\t\t\t%c%c%cCREATED BY PROGRAMMER JAHID%c%c%c\t\t\t\t\t\t\t\n\n\n",3,3,3,3,3,3);
    printf("\t\t\t\tEnter the password:\n\n\n\t\t\t");
    while((p=getch())!= 13)
    {
    password[i++] = p;
    printf("%c",3);
    }
    password[i] = '\0';
    if(i<6)
    printf("\t\t\t\n\n\n\nWeak password");
    printf("\n\n\n\nYou have entered: %s\t\t\t\n\n\n\n",password);
    return 0;
}
