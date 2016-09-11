//This program shows how to print color in c language with blink function
    #include<stdio.h>
    void main()

    {
    int i,b,l,r,x=41;
    for(i=1;i<=12;i++)
    {
    for(b=1;b<=x;b++)
    printf(" ");
    x--;
    for(l=1;l<i;l++)
      {
    textcolor(3+128);
    cprintf("%c",4);
      }
      for(r=i-1;r>=1;r--)
      {
      textcolor(4+128);
      cprintf("%c",4);
      }
      printf("\n");

      }
      x=37;
      for(i=1;i<=13;i++)
        {
        for(b=1;b<=x;b++)
        printf(" ");
        textcolor(2+128);
        for(l=1;l<=4;l++)
        cprintf("%c",2);
        for(b=1;b<=0;b++)
        printf(" ");
        textcolor(5+128);

        for(l=1;l<=4;l++)
        cprintf("%c",3);
        printf("\n");
          }
_setcursortype("_NOCURSOR");//this function is use for hide cursor
           getch();
            }
