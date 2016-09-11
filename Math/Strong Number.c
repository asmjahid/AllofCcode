#include<stdio.h>
void strong_number()
  {
    int num,i,p,r,sum=0,save_num;
    printf("\n Enter a number");
    scanf("%d",&num);
    save_num=num;
    while(num)
    {
        i=1,p=1;
        r=num%10;
    while(i<=r)
      {
        p=p*i;
        i++;
      } //while
        sum=sum+p;
        num=num/10;
    } //while
    if(sum==save_num)
      printf("%d is a Strong number", save_num);
    else
      printf("%d is not a Strong number", save_num);
  }
