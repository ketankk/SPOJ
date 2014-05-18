#include<stdio.h>
#include<limits.h>

int min(int x, int y, int z);
int n;
int minCost(int cost[][],int m,n)
{
   if (n<0||m < 0)
      return INT_MAX;
   else if (m == 0 && n == 0)
      return cost[m][n];
   else
      return cost[m][n]+max(minCost(cost, m-1, n),minCost(cost, m, n-1));
}

/*int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}*/

int main()
{
   int k[101][101];
   scanf("%d",&t);
   while(t--)
    {
        scanf("%d,",&n);
   for(i=0;i<n;i++)
    for(j=0;j<=i;j++)
    scanf("%d",&k[i][j]);
   printf(" %d ", minCost(k,n,n));
    }
   return 0;
}
