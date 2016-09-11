#include<stdio.h>
#include<windows.h>
#include<dos.h>
#include<string.h>
void main()
{
    int i,j,rbw,dyrq=85,bmid,delay;
    void title();
    void title1();
    char month[3],fo;
    char name[25],dmm[3];
    char o1,dobmm,smoke;
    float height,weight,bmi;
    int digit=0,dobdd,dobyy,dobs,ddd,dyy;
    void dob(),calc();
    printf("\n\n\n\n\n\nThe Program Will show your death date!!");
    for(i=0; i<=100;i++)
    {
        system("color D0");
        title1();
        printf(" %d %",i);
        printf("completed");
    }
    printf("\n\t\t\t\t\t\n\n\t\t    Press ANY KEY !! to continue");
    title();
    first:
    printf("\n\n\n\t\t\tAre you ready ?!");
    printf("\n\n\t\t\t!!Press Y/N:\n\n");
    o1=getche();
    switch(o1)
    {
        case 'Y':
        case 'y':
        goto y;

        case 'n':
        case 'N':
        title();
        printf("\nThe program will close on 5 seconds");
        for (i=0;i<5;i++)
        {
            printf(".");
        }
        exit(0);
    }
    y:
    title();
    printf("\n\nPlease Enter your FULL NAME!!\n");
    gets(name);
    for(i=0;i<25;i++)
    {
        j=i+1;
        if((name[i])&&(name[j]) != '\.')
        {
            digit++;
        }
        else
        {
            break;
        }
        digit++;
    }


    title();
    printf("\nHello %s , You are Welcome!!\n",name);
    title();
    printf("\nPlease answer to the computer for following questions....\n");
    printf("\n\nPress ANY KEY to continue\n\n");
    getch();
    dob();
    doby1:
    printf("\nEnter year....(eg. 1990)\n");
    doby:
    scanf("%d",&dobyy);
    if ((dobyy<1000)||(dobyy>2014))
    {
        printf("The year Must be in between(1000-2014)\n");
        printf("Try Again!!");
        goto doby;
    }
    dob();
    printf("\nPlease Select the month\n---------------------\n");
    printf("A - January\nB - February\nC - march\nD - April\nE - May\nF - June\nG - July\nH - August\nI - September\nJ - October\nK - November\nL- December");
    dobm:
    dobmm=getche();
    switch(dobmm)
    {
        case 'a':
        case 'A':

        case 'b':
        case 'B':

        case 'c':
        case 'C':

        case 'd':
        case 'D':

        case 'e':
        case 'E':

        case 'f':
        case 'F':

        case 'g':
        case 'G':

        case 'h':
        case 'H':

        case 'i':
        case 'I':

        case 'j':
        case 'J':

        case 'k':
        case 'K':

        case 'l':
        case 'L':

        break;
        default:
        printf("\nSorry!! Wrong choice try again..\nTry Again\n");
        goto dobm;
    }
    dob();
    printf("\nEnter the Day....");
    dobd:
    scanf("%d",&dobdd);
    switch(dobmm)
    {
        case 'a':case'A':case 'C': case 'c': case 'e': case 'E': case 'g':case 'G': case 'h':case 'H': case 'j': case 'J':case 'l': case 'L':
        if (dobdd >31 || dobdd<1)
        {
            printf("\nPlease Enter the currect date (1-31)\nTry Again!!");
            goto dobd;

        }
        break;
        case 'd': case 'D': case 'f': case 'F': case 'i': case 'I': case 'k': case 'K': case 'm': case 'M':
        if ((dobdd>30 || dobdd<1))
        {
            printf("\nPlease Enter the currect date (1-30)\nTry Again!!\n");
            goto dobd;
        }
        break;
        case 'b':case'B':
        {
            if (dobyy%4 == 0)
            {
                if ((dobdd>29) || (dobdd<1))
                {
                        printf("\nPlease Enter the currect date (1-29)\nTry Again!!\n");
                        goto dobd;
                }
            }
            else
            {
                if ((dobdd>28)|| (dobdd<1))
                {
                    printf("\nPlease Enter the currect date (1-28)\nTry Again!!\n");
                    goto dobd;
                }
            }
            break;
        }
    }

    switch(dobmm)
    {
        case 'a':
        case 'A':
            month[0]='J';month[1]='a'; month[2]='n';
            break;
        case 'b':
        case 'B':
            month[0]='F';month[1]='e';month[2]='b';
            break;
        case 'c':
        case 'C':
            month[0]='M';month[1]='a';month[2]='r';
            break;
        case 'd':
        case 'D':
            month[0]='A';month[1]='p';month[2]='r';
            break;
        case 'e':
        case 'E':
            month[0]='M';month[1]='a';month[2]='y';
            break;
        case 'f':
        case 'F':
            month[0]='J';month[1]='u';month[2]='n';
            break;
        case 'g':
        case 'G':
            month[0]='J';month[1]='u';month[2]='l';
            break;
        case 'h':
        case 'H':
            month[0]='A';month[1]='u';month[2]='g';
            break;
        case 'i':
        case 'I':
            month[0]='S';month[1]='e';month[2]='p';
            break;
        case 'j':
        case 'J':
            month[0]='O';month[1]='c';month[2]='t';
            break;
        case 'k':
        case 'K':
            month[0]='N';month[1]='o';month[2]='v';
            break;
        case 'l':
        case 'L':
            month[0]='D';month[1]='e';month[2]='c';
            break;
    }
    printf("And you born on %d ",dobdd);
    for (i=0;i<3;i++)
    {
        printf("%c",month[i]);
    }
    printf(" %d are you sure ??(y/n)",dobyy);
    op11:
    o1=getche();
    switch(o1)
    {
        case 'y':
        case 'Y':
        break;
        case 'n':
        case 'N':
        printf("Please try again!!");
        goto doby1;
        default:
        printf("Wrong Choice try again!!");
        goto op11;
    }
    title();
    {
        printf("\nDo you smoke?");
        printf("\n1 - less than three times a day");
        printf("\n2 - lessthan 10 times a day");
        printf("\n3 - more than one packets a day");
        printf("\n4 - never smoke");
        smok:
        smoke= getche();
        switch(smoke)
        {
            case '1':
            dyrq--;
            break;
            case '2':
            dyrq=dyrq-2;
            case '3':
            dyrq=dyrq-4;
            break;
            case '4':
            break;
            default:
            printf("Sorry!! Wrong Input try again..");
            goto smok;
        }
        title();
        printf("\nWhat is your height (in meters)..\n       (eg.. 1.72)\n");
        scanf("%f",&height);
        title();
        printf("\nWhat is your weight (in kg)..\n      (eg.. 77.5)\n");
        scanf("%f",&weight);
        bmi=weight/(height*height);
        rbw=24*(height*height);
        bmid=weight-rbw;
        title();
        printf("\nPlease wait Calculating");
        for (i=0;i<20;i++)
        {
           calc();
        }
        printf("\nCalculation Completed!!");
        printf("\nPress Any Key to view your death date!!");
        getch();
        title();
        dobs=dobdd+dobyy;
        dobs=dobs%12;
        switch(dobs)
        {
            case 0:
            dmm[0]='J' ;dmm[1]='a' ;dmm[2]='n';
            break;
            case 1:
            dmm[0]='F' ;dmm[1]='e' ;dmm[2]='b';
            break;
            case 2:
            dmm[0]='M' ;dmm[1]='a' ;dmm[2]='r';
            break;
            case 3:
            dmm[0]='A' ;dmm[1]='p' ;dmm[2]='r';
            break;
            case 4:
            dmm[0]='M' ;dmm[1]='a' ;dmm[2]='y';
            break;
            case 5:
            dmm[0]='J' ;dmm[1]='u' ;dmm[2]='n';
            break;
            case 6:
            dmm[0]='J' ;dmm[1]='u' ;dmm[2]='l';
            break;
            case 7:
            dmm[0]='A' ;dmm[1]='u' ;dmm[2]='g';
            break;
            case 8:
            dmm[0]='S' ;dmm[1]='e' ;dmm[2]='p';
            break;
            case 9:
            dmm[0]='O' ;dmm[1]='c' ;dmm[2]='t';
            break;
            case 10:
            dmm[0]='N' ;dmm[1]='o' ;dmm[2]='v';
            break;
            case 11:
            dmm[0]='D' ;dmm[1]='e' ;dmm[2]='c';
            break;
        }
        ddd=(dobyy+dobdd)%28;
        ddd++;
        printf("\nMessages\n---------\nYour death date is on %d ",ddd);
        for (i=0;i<3;i++)
        {
              printf("%c",dmm[i]);
        }
        if (bmid>0)
        {
            dyrq=dyrq-(bmid/2);
        }
        dyy=dobyy+dyrq;
        printf(" %d",dyy);
        if (bmi>24)
        {
           printf("\n");
           printf("- As per Body Mass Index you should maintain your body weight in to %dkg thats \n  kills your %d years",rbw,(bmid/2));
        }
        if(bmi<=24)
        {
            printf("\n- Your Body Mass Index is perfect!!\n");
        }
        switch(smoke)
        {
            case '1':
            printf("\n- Your smoking habits kills your 1 year!!");
            break;
            case '2':
            printf("\n- Your smoking habits kills your 2 years!!");
            break;
            case '3':
            printf("\n- Try to reduce your smoking habits .. thats kills your 4 years!!");
            break;
        }
        printf("\n\nWhat you want to do know??\n1 - Try Again\n2 - exit");
        foo:
        fo=getche();
        switch(fo)
        {
            case '1':
            goto first;
            case '2':
            title();
            printf("\nThe program will close on 5 seconds");
            for(i=0;i<5;i++)
            {
             calc();
            }
            exit(0);
            break;
            default:
            printf("\nWrong choice Try Again!!");
            goto foo;
        }
    }
}
void title()
{
    printf("\n\n------------------------------Your DEATH is on.....?!-------------------------");
}
void title1()
{
printf("                                      \n                      ----\n");
    printf("\t\tThis Program is only for FUN\n");
    printf("\t\tLoading Please wait......");
}
void dob()
{
    title();
    printf("\nNeed Your Date Of Birth...");
}
void calc()
{
    printf("-");
}
