#include <stdio.h>
int main()
{
    int x, y, temp;
    printf("Enter the value of x and y\n");
    scanf("%d", &x, &y);
    printf("Before Swapping\n x = %d\ny = %d\n",x,y);
    temp = x;
    x = y;
    y = temp;
    printf("After Swapping\n x = %d\ny = %d\n",x,y);
    return 0;
}
