//Transpose A Matrix
   #include <stdio.h>
   #include <conio.h>
   int main()
   {
     int m, n, i, j;
     int mat[10][10], trans[10][10];
     printf(" Enter the number of rows and columns of matrix ");
     scanf(" %d %d ", &m, &n);
     printf(" Enter the elements of matrix \n ");
     for( i = 0 ; i < m ; i++ )
     {
       for( j = 0 ; j < n ; j++ )
       {
         scanf(" %d ", &mat[i][j] );
       }
     }
     for( i = 0 ; i < m ; i++ )
     {
       for( j = 0 ; j < n ; j++ )
       {
         trans[j][i] = mat[i][j];
       }
     }
     printf(" Transpose of entered matrix :-\n ");
     for( i = 0 ; i < n ; i++ )
     {
       for( j = 0 ; j < m ; j++ )
       {
         printf(" %d\t ", trans[i][j] );
       }
       printf(" \n ");
     }
     getch();
     return 0;
   }

