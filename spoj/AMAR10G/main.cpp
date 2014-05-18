#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)

{
    int n,c,a[20002];
    cin>>n>>c;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int minm=1000000001,h;
    for(int i=0;i<=n-c;i++)
    {
        h=a[i+c-1]-a[i];
        minm=min(h,minm);
    }
    cout<<minm<<"\n";

}
        return 0;
}
