#include<stdio.h>
#include<math.h>
#define PI 3.1415
float exp_x(int,int);
double sin_x(int,int);
double cos_x(int,int);
int fact(int);
int main()
{
    int choice,x,n;
    do { printf("\nMenu\n[1] e^x)\n[2] Sin (x)\n[3] Cos(x)\n[4] Exit\n");
     scanf("%d",&choice); switch(choice)
{
    case 1:
    scanf("%d %d",&x,&n);
    printf("e^%d(%d) = %f\n",x,n,exp_x (x,n));
    break;
    case 2:
    printf("sin(x)\nEnter x and n:\t");
    scanf("%d %d",&x,&n);
    printf("\ncos(%d)(%d) = %f \n",x,n,sin_x(x,n));
    break;
    case 3:
    printf("cos(x)\nEnter x and n:\t");
    scanf("%d %d",&x,&n);
    printf("\ncos(%d)(%d) = %f \n",x,n,cos_x(x,n));
    break;
    case 4:
    printf("Wrong choice");
    break;
}
}
    while(choice!=4);
}
    float exp_x(int x,int n)
{
    int i=1;
    float ex=1;
    while(i { ex+=(float)pow(x,i)/fact(i)
          }
          ;
          ++i;
          )
    return ex;
}
    double sin_x(int ang_deg,int no_of_terms)
{
    int term,j;
    double value=0.0,ang_rad=0.0; ang_rad=(double)ang_deg*PI/180;
    for(term=1,j=2;term{ value+=(double)pow(-1.0,j)*pow (ang_rad,term)/fact(term);
}
    return value;
}
    double cos_x(int ang_deg,int no_of_terms)
{
    int term,j; double value=1.0,ang_rad=0.0; ang_rad=(double)ang_deg*PI/180;
    for (term=2,j=1;term<=no_of_terms;term +=2,j++)
{
    value+=(double)pow(-1.0,j)*pow (ang_rad,term)/fact(term);
}
    return value;
}
    int fact(int num)
{
    int f=0;
    if(num==1)
    return 1;
    else f=num*fact(num-1);
    return f;
}
}
