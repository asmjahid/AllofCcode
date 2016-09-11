//Largest Among n digit
   #include<stdio.h>
   #include<conio.h>
   void main()
   {
     int max_num(int a[],int n);
     int max,i,n;
     int a[50];
     printf("Enter n number:");
     scanf("%d",&n);
     printf("Enter the numbers:");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     max=max_num(a,n);
     printf("The largest number is %d",max);
     getch();
   }
   int max_num(int a[],int n)
   {
     int i,m=0;
     for(i=0;i<n;i++)
     {
       if(a[i]>m)
         m=a[i];
     }
     return m;
   }

