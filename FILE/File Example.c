#include<stdio.h>
   int main()
   {
     FILE *fp;
     char ch;
     fp=fopen("jahid.txt","w");
     printf("\nEnter data to be stored in to the file:");
     while((ch=getchar())!=EOF)
     putc(ch,fp);
     fclose(fp);
     return 0;
   }
