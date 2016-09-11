//Code for Program to compute x to the power n using while loop in C Programming
main()
   {
       int count, n;
       float x, y;

       printf("Enter the values of x and n : ");
       scanf("%f %d", &x, &n);
       y = 1.0;
       count = 1;               /* Initialisation */
/* LOOP BEGINs */
while ( count <= n)      /* Testing */

       {
            y = y*x;
            count++;           /* Incrementing */

       }
       /* END OF LOOP */

       printf("\nx = %f; n = %d; x to power n = %f\n",x,n,y);
   }
