#include<stdio.h>
 long long int max(long long int a,long long int b) { return (a > b)? a : b; }


long long int knapSack(long long int W,long long int wt[],long long int val[],long long int n)
{
   long long int i, w;
   long long int K[n+1][W+1];

   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}

int main()
{
   long long int val[502];
    long long int wt[502];
    long long int w;
    long long int n,i;
    scanf("%lld%lld",&w,&n);
    for(i=0;i<n;i++)
        scanf("%lld%lld",&val[i],&wt[i]);
    printf("%lld\n", knapSack(w, wt, val, n));
    return 0;
}
