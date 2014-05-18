#include <iostream>
#define ll long long
using namespace std;
bool nice(ll n)

{ ll temp;
temp=n;
  ll sum=0;
    while(temp>0)
    {
        sum=sum+temp%10;
        temp=temp/10;
    }
    if(n%sum==0)
        return 1;
    else return 0;

}
int main()
{
int t;
cin>>t;
while(t--)

{ ll n;
    cin>>n;
    while(1)
    {
        if(nice(n)==1)
        {
            cout<<n<<"\n";
       break; }
       else
        n++;
    }
}
        return 0;
}
