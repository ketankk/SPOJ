#include <stdio.h>
#include <math.h>

double f(double x)
{
   return cos(x) - x*x*x;
}

double FalsiMethod(double s, double t, double e, int m)
{
   double r,fr;
   int n, side=0;
   double fs = f(s);
   double ft = f(t);

   for (n = 0; n < m; n++)
   {

       r = (fs*t - ft*s) / (fs - ft);
       if (fabs(t-s) < e*fabs(t+s)) break;
       fr = f(r);

       if (fr * ft > 0)
       {
         t = r; ft = fr;
         if (side==-1) fs /= 2;
         side = -1;
       }
       else if (fs * fr > 0)
       {
         s = r;  fs = fr;
         if (side==+1) ft /= 2;
         side = +1;
       }
       else
                break;

    }
    return r;
}

int main(void)
{
    printf("%0.15f\n", FalsiMethod(0, 1, 5E-15, 100));
    return 0;
}
