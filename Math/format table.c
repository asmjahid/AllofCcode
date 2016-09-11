//Md.jahid
// ID: 12-023-1-02-00419
# include<stdio.h>
int main()
{
int a[10],i;
printf("Enter the marks:\n");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
if(a[i]>=80)
{
printf("\n %d\t\t A+",a[i]);
}
else if(a[i]>=70 && a[i]<80)
{
printf("\n %d\t\t A",a[i]);
}
else if(a[i]>=60 && a[i]<70)
{
printf("\n %d\t\t A-",a[i]);
}
else if(a[i]>=50 && a[i]<60)
{
printf("\n %d\t\t B",a[i]);
}
else if(a[i]>=40 && a[i]<50)
{
printf("\n %d\t\t C",a[i]);
}
else
{
printf("\n %d\t\t F",a[i]);
 }
return 0;
}
