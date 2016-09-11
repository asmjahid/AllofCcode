#include<stdio.h>
#include<math.h>
float pos(float a,float b,float c)
{
    float pos=0.0,h;
    h=(b*b-4*a*c);
    pos=((-b+sqrt(h))/(2*a));
    return pos;
}
float neg(float a,float b,float c)
{
    float neg=0.0,h;
    h=(b*b-4*a*c);
    printf("h=%f\n",h);
    printf("nom=%f\n",-b-sqrt(h));
    neg=((-b-sqrt(h))/(2*a));
    return neg;
}
void altmain()
{
    float i,j,k;
    float s,q;
    scanf("%f %f %f" ,&i,&j,&k);
    if((j*j-4*i*k)>0)
    {
    s=pos(i,j,k);
    q=neg(i,j,k);
    printf("s=%f q=%f",s,q);
    }
    else
    printf("Error input");
}
main()
{
    altmain();
    return 0;
}
