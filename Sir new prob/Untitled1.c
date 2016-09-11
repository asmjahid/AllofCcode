#include <stdio.h>
int main()
{
    int x, y, z, space = 9;
    printf("Enter number of rows:");
    scanf("%d", &x);
    space = x +9;
    for (z = 1; z <= x; z++)
{
    for (y = 1; y <= space; y++)
    printf("");
    space--;
    for (y = 1; y <= 2*z-1; y++)
    printf("");
    printf("\n");
}
}
