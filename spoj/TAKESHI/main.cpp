#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)

{
    int n,c,i,j;
    int a[102][102],cost[102][102]={0};
    cin>>n>>c;
    for(i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
        cost[0][0]=a[0][0];
    for(i=1;i<n;i++)
        cost[i][0]=a[i][0]+cost[i-1][0];
    for(i=1;i<n;i++)
        cost[0][i]=a[0][i]+cost[0][i-1];

    for(i=1;i<n;i++)
        for(j=1;j<n;j++)
                cost[i][j]=a[i][j]+max(cost[i-1][j],cost[i][j-1]);
    int k=cost[n-1][n-1]-c;
    if(k<0)
    cout<<"-1\n";
    else     cout<<k<<"\n";



}
        return 0;
}
