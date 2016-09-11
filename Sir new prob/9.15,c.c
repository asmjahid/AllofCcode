#include <stdio.h>
#include <math.h>

int main()
{
    int m, i;
    float sum=0, t=0, max=-9999, min=999999, sdeviation=0, mean=0;
    float a[100],d[100];


    printf("HOW MANY NUMBERS:\n");
    scanf("%d",&m);
    printf("ENTER THE NUMBERS:\n");
    for(i=0;i<m;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }

    mean=sum/m;
    for(i=0;i<m;i++)
    {
        d[i]=a[i]-mean;
        t+=pow(d[i],2);
        t=t/m;
        sdeviation = sqrt(t);
    }

    printf("THE SUM = %.2f\n",sum);
    printf("THE MEAN = %.2f\n",mean);
    printf("THE DEVIATION:  ");
    for(i=0;i<m;i++)
    {
        printf("%.2f  ",d[i]);
    }
    printf("\nTHE STANDARD DEVIATION = %.2f\n",sdeviation);
    printf("THE MAXIMUM = %.2f\n",max);
    printf("THE MINIMUM = %.2f\n",min);
    return 0;
}

