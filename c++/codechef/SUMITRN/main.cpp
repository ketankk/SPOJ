#include <iostream>

using namespace std;

int main()
{
int n,t;
cin>>t;
while(t--)
{  int maxm=-1;
int a[101][101],cost[101][101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cost[i][j]=0;
    }
    cost[0][0]=a[0][0];
    maxm=cost[0][0];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            {   if(j==i-1)
                cost[i][j]=a[i][j] + cost[i-1][j-1];
                if(j==0)
                cost[i][j]=a[i][j] + cost[i-1][j];
                else
                cost[i][j]=a[i][j] + max(cost[i-1][j-1],cost[i-1][j]);
                maxm = max(maxm,cost[i][j]);
            }
    }
    cout<<maxm<<"\n";

}
        return 0;
}
