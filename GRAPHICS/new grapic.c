    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    int main()
    {
    int ip;
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    cscanf("%d",&ip);
    getch();
    printf("Input Output \n");
    printf("%d %d",ip , ip);
    getch();
    return 0;
    }
