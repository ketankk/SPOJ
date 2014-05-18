#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)

{  int a[102][102],b[102][102];
    long long sum,d[102][102],max1,c[102][102];
    int i,j,m,n;
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>a[i][j];

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>b[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>c[i][j];
      sum=0;
    for(i=0;i<n;i++)
    { max1=0;
        for(j=0;j<m;j++)
        {
        d[i][j]=min(a[i][j],b[i][j])*c[i][j];
        max1=max(max1,d[i][j]);
        }
        sum=sum+max1;
    }
    cout<<sum<<"\n";

}
        return 0;
}
