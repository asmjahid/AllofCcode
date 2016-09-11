//Inverse of the Matrix
   #include<stdio.h>
   #include<math.h>
   float detrminant(float[][], float);
   void cofactors(float[][], float);
   void trans(float[][], float[][], float);
   main()
   {
     float a[25][25], n, d;
     int i, j;
     printf("Enter the order of the matrix:\n");
     scanf("%f", &n);
     printf("Enter the elemnts into the matrix:\n");
     for (i = 0; i < n; i++)
     {
       for (j = 0; j < n; j++)
       {
         scanf("%f", &a[i][j]);
       }
     }
     d = detrminant(a, n);
     printf("\nTHE DETERMINANT IS=%2f", d);
     if (d == 0)
       printf("\nMATRIX IS NOT INVERSIBLE\n");
     else
       cofactors(a, n);
   }
   float detrminant(float a[25][25], float k)
   {
     float s = 1, det = 0, b[25][25];
     int i, j, m, n, c;
     if (k == 1)
     {
       return (a[0][0]);
     }
     else
     {
       det = 0;
       for (c = 0; c < k; c++)
       {
         m = 0;
         n = 0;
         for (i = 0; i < k; i++)
         {
           for (j = 0; j < k; j++)
           {
             b[i][j] = 0;
             if (i != 0 && j != c)
             {
               b[m][n] = a[i][j];
               if (n < (k - 2))
                 n++;
               else
               {
                 n = 0;
                 m++;
               }
             }
           }
         }
         det = det + s * (a[0][c] * detrminant(b, k - 1));
         s = -1 * s;
       }
     }
     return (det);
   }
   void cofactors(float num[25][25], float f)
   {
     float b[25][25], fac[25][25];
     int p, q, m, n, i, j;
     for (q = 0; q < f; q++)
     {
       for (p = 0; p < f; p++)
       {
         m = 0;
         n = 0;
         for (i = 0; i < f; i++)
         {
           for (j = 0; j < f; j++)
           {
             b[i][j] = 0;
             if (i != q && j != p)
             {
               b[m][n] = num[i][j];
               if (n < (f - 2))
                 n++;
               else
               {
                 n = 0;
                 m++;
               }
             }
           }
         }
         fac[q][p] = pow(-1, q + p) * detrminant(b, f - 1);
       }
     }
     trans(num, fac, f);
   }
   void trans(float num[25][25], float fac[25][25], float r)
   {
     int i, j;
     float b[25][25], inv[25][25], d;
     for (i = 0; i < r; i++)
     {
       for (j = 0; j < r; j++)
       {
         b[i][j] = fac[j][i];
       }
     }
     d = detrminant(num, r);
     inv[i][j] = 0;
     for (i = 0; i < r; i++)
     {
       for (j = 0; j < r; j++)
       {
         inv[i][j] = b[i][j] / d;
       }
     }
     printf("\nTHE INVERSE OF THE MATRIX:\n");
     for (i = 0; i < r; i++)
     {
       for (j = 0; j < r; j++)
       {
         printf("\  %2f", inv[i][j]);
       }
       printf("\n");
     }
   }

