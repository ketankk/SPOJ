#include<stdio.h>
int main()
{
int t,h,a,time;
scanf("%d", &t);
while(t>0)
{
scanf("%d %d", &h, &a);
time=0;
while(h>0 && a>0)
    {
    if(time%2==0)
    {
    h=h+3;
    a=a+2;
    }
    else
            {
            if(h>20)
                {
                h=h-20;
                a=a+5;
                }
            else
                {
                    h=h-5;
                    a=a-10;
                }
            }
            time++;
    }
printf("%d\n", time-1);
t--;
}
return 0;
}
