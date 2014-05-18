#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
long long int t,i;
cin>>t;
while(t--)
{
    long long int n;
cin>>n;
long long int a[n+5];
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);

long long int p=a[0];


for(i=1;i<n;i++)
    {
        a[i]=(a[i]-i);
        if(a[i]<=0)
            {
                p=0;
                break;
            }

    else
        {
            p=p*a[i];
            p=p%1000000007;
    }
    }
cout<<p<<"\n";
}
cout<<"KILL BATMAN";


    return 0;
}
