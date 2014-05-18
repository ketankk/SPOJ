#include <stdio.h>

int main()
{
double n=30,sum=0.0,sum2=0.0;
for(float i=1;i<n;i+=4)
{
    sum=sum+(4.0/i);
}
for(double i=3;i<n;i+=4)
{
    sum2=sum2+(4.0/i);
}
printf("%.100f",sum-sum2);
    return 0;
}
