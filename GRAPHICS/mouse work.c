#include<dos.h>
#include<conio.h>
int initmouse();
union REGS i, o;
main()
{
    int status;
    status = initmouse();
    if ( status == 0 )
    printf("Mouse support not available.\n");
    else
    printf("Mouse support available.\n");
    getch();
    return 0;
}

int initmouse()
{
   i.x.ax = 0;
   int86(0X33,&i,&o);
   return ( o.x.ax );
}
