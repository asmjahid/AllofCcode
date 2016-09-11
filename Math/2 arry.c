//Write a program to concatenat e two strings without using strcat() function. strcat(str ing1,strin g2) is a C standard function declared in the header file string.h The strcat() function concatenat es string2, string1 and returns string1. Program: Program to concatenat e two strings
#include<stdio.h>
#include<string.h>
char *strct(cha *c1, char *c2);
char *strct(cha *c1, char *c2);
{ //strlen function returns length of argument string
int i = strlen(c1) ;
int k = 0; // loops until null is encountered and appends string c2 to c1
while (c2[k] !='\0')
{ c1[i + k] = c2[k]; k++;
}
return c1;
}
int main()
{
char string1[15 ] ="first";
char string2[15 ] ="second";
char *finalstr;
printf("Be fore concatenat ion:" "\n string1 = %s \n string2 = %s", string1, string2); // addresses of string1, string2 are passed to strct()
finalstr = strcat(str ing1, string2);
printf("\n After concatenat ion:"); //prints the contents of string whose address is in finalstr
printf("\n finalstr = %s", finalstr); //prints the contents of string1
printf("\n string1 = %s", string1); //prints the contents of string2
printf("\n string2 = %s", string2);
return 0;
} Output:

Before concatenat ion: string1 = first string2 = second After concatenat ion: finalstr = firstsecon d string1 = firstsecon d string2 = second Explanatio n: string2 is appended at the end of string1 and contents of string2 are unchanged. In strct() function, using a for loop, all the characters of string'c2'are copied at the end of c1. return (c1) is equivalent to return&c1[0] and it returns the base address of'c1'.'finalstr' stores that address returned by the function strct().
