//MD.JAHID
//ID-12-023-1-02-00419
#include<stdio.h>
#include<math.h>
main()
{
       int n,count=0,count1=0,count2=0;
       int countless=0,countgreat=0;
       float avgfloar=0.0,avgceiil=0.0;
       float x[10],sumfloar=0.0,sumceiil=0.0;
       float sum=0.0,avg=0.0;
       printf("How many number you want to enter:");
       scanf("%d", &n);
while (count<n)
{
       printf("number= ");
       scanf("%f", &x[count]);
       sum+=x[count];
       count++;
}
       avg=sum/count;
       printf("avg=%f\n",avg);
while (count1<n)
{
if(x[count1] <= avg)
       {
       x[count1] =floor (x[count1]);
       sumfloar=sumfloar + x[count1];
       countless++;
       }
        count1++;
       }
       while (count2<n)
{
if(x[count2] <= avg)
       {
       x[count2] =floor (x[count2]);
       sumfloar=sumfloar + x[count2];
       countgreat++;
       }
        count2++;
}
        avgfloar=sumfloar/(float) countless;
        printf("sumfloor=%f\t",sumfloar);
        printf("Averagefloor=%f\t",avgfloar);

        avgceiil=sumceiil/(float) countgreat;
        printf("sumceiil=%f\t",sumceiil);
        printf("Averageceiil=%f\t",avgceiil);
}
