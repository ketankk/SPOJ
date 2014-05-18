#include <iostream>
using namespace std;

int maxcost(int a[205][205],int n, int m)
{int cost[205][205];
  cost[0][0]=a[0][0];
  int maxm=-1;


   for(int i=1;i<=m;i++)
    {cost[0][i]=a[0][i];
    maxm = max(cost[0][i],maxm);
    }


    for(int i=1;i<=n;i++)
         for(int j=0;j<=m;j++)
            {
if(j==0)
cost[i][j] = a[i][j]+max(cost[i-1][j+1],cost[i-1][j]);
if(j==m)
cost[i][j] = a[i][j]+max(cost[i-1][j-1],cost[i-1][j]);

else
cost[i][j] = a[i][j]+max(max(cost[i-1][j+1],cost[i-1][j-1]),cost[i-1][j]);
            if(cost[i][j]>maxm)
                maxm=cost[i][j];
            }
    return maxm;
}
int main()
{
    int i,t,n,m,j,k[205][205];
cin>>t;
while(t--)
{
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            cin>>k[i][j];
        }

    cout<<maxcost(k,n-1,m-1)<<"\n";}
    return 0;
    }
