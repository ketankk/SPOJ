#include <iostream>

using namespace std;

int main()
{
int t,n,a[1005];
cin>>t;
while(t--)

{
    cin>>n;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    if(a[i]!=i&&a[i]!=n-i-1)
    {
        temp=1;
         break;
    }
    }
    if(temp==0)
        cout<<"NO\n";
    else cout<<"YES\n";
}
        return 0;
}
