#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{
int t,x,y,z;
cin>>t;
while(t--)
{
    cin>>x>>y>>z;
    if(z>x&&z>y)
        cout<<"NO\n";
    else if(z%gcd(x,y)!=0)
         cout<<"NO\n";
    else cout<<"YES\n";
}
        return 0;
}
