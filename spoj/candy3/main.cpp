#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long long int i, a[1000002],n;
    cin>>n;
    long long int sum=0;
    for(i=0;i<n;i++)
       {
        cin>>a[i];
        sum=(sum+a[i])%n;
        }
        if(sum==0)
            cout<<"YES\n";
            else cout<<"NO\n";
    }return 0;
}
