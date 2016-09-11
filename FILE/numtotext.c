#include<stdio.h>
void printtext(long int value)
{
    //value should be in 1-99
    char *text[20]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","tweleve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *text2[10]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    if (value<20)
    {
        printf("%s",text[value]);
    }
    else
    {
        int val=value/10;
        value=value%10;
        printf("%s ",text2[val]);

        if(value>0)
        {
            printf("%s",text[value]);
        }

    }


}

main()
{
    long int isprint, num, val;

    while(scanf("%ld", &num)!=EOF)
    {
        if(num<0)
        {
            printf("minus ");
            num=-num;
        }

        if (num==0)
        {
            printf("zero");
        }
        else
        {
            isprint=0;

            val=num/10000000;
            num=num%10000000;
            if(val>0)
            {
                if (isprint==1)
                {
                    printf(" ");
                }
                printtext(val);
                printf(" crore");
                isprint=1;
            }

            val=num/100000;
            num=num%100000;
            if(val>0)
            {
                if (isprint==1)
                {
                    printf(" ");
                }
                printtext(val);
                printf(" lac", val);
                isprint=1;
            }

            val=num/1000;
            num=num%1000;
            if(val>0)
            {
                if (isprint==1)
                {
                    printf(" ");
                }
                printtext(val);
                printf(" thousand", val);
                isprint=1;
            }

            val=num/100;
            num=num%100;
            if(val>0)
            {
                if (isprint==1)
                {
                    printf(" ");
                }
                printtext(val);
                printf(" hundred", val);
                isprint=1;
            }

            if(num>0)
            {
                if (isprint==1)
                {
                    printf(" ");
                }
                printtext(num);
            }
            printf("\n");
        }
    }
}
