#include <stdio.h>
#include <stdlib.h>
#define S 6
main()
{
    int a[S], freq[S];
    int i, j, k,n = S;
    for(i = 0; i < S; i++)
    {
        printf(" \n Enter a[%d] element: ", i);
        scanf(" %d ", &a[i]);
        freq[i] = 1;
    }
    printf(" Original Array\n ");
    for(i = 0; i < S; i++)
        printf(" %d   ", a[i]);
    /* Main Logic Starts Here */
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n; k++)
                    a[k] = a[k+1];
                freq[i]++;
                n--;
            }
        }
    printf(" \nArray with freq\n ");
    printf(" \nElement  Freq\n ");
    for(i = 0; i < n; i++)
        printf("%d  %d\n ", a[i], freq[i]);
}
