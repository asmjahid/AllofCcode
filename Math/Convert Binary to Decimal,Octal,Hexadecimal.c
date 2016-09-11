#include<stdio.h>
#include<string.h>
void hexadecimal();
void main()
{
    int num, bnum, dec = 0, base = 1, rem ,dec1=0,oct[25],dec2=0,flag=0,i=0,counter=0,j;
    printf("Enter the binary number(1s and 0s)\n");
    scanf("%d", &num);
    bnum = num;
    while( num > 0)
    {
        rem = num % 10;
        if((rem==0) || (rem==1))
        {
            dec = dec + rem * base;
            num = num / 10 ;
            base = base * 2;
            flag=1;
        }
        else
        {
            flag=0;
            printf("\n Enter binary number \n");
            break;
        }
    }
    if(flag==1)
    {
        printf("The Binary number is = %d\n", bnum);
        printf("Its decimal equivalent is =%d\n", dec);
        dec1=dec;
        dec2=dec1;
        while(dec>0)
        {
            rem=dec%8;
            oct[i]=rem;
            dec=dec/8;
            i++;
            counter++;
        }
        counter--;
        printf("\n Its octal equivalent is:");
        while(counter>=0)
        {
            printf("%d" ,oct[counter]);
            counter--;
        }
        printf("\nIts Hexa Decimal equivalant is: ");
        hexadecimal(dec2);
    }
}
void hexadecimal(long n)
{
    long i;
    if(n>0)
    {
        i=n%16;
        n=n/16;
        hexadecimal(n);
        if(i>=10)
        {
            switch(i)
            {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            }
        }
        else
            printf("%ld",i);
    }
}
