#include <stdio.h>
#include <process.h>
void main(int argc,char*argv[])
   {
     FILE *fs,*ft;
     char ch;
     if(argc!=3)
     {
       puts("Invalid number of arguments.");
       exit(0);
     }
     fs = fopen(argv[1],"r");
     if(fs==NULL)
     {
       puts("Source file cannot be opened.");
       exit(0);
     }
     ft = fopen(argv[2],"w");
     if (ft==NULL)
     {
       puts("Target file cannot be opened.");
       fclose(fs);
       exit(0);
     }
     while(1)
     {
       ch=fgetc(fs);
       if (ch==EOF)
       break;
       else
         fputc(ch,ft);
     }
     fclose(fs);
     fclose(ft);
     getch();
   }
