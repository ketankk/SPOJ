#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{long long n,i;
    cin>>n;
    bool temp=0;
    for(i=2;i*i<n;i++)
    {
       int count=0;
            while (n%i==0) {
                count++;
                n/=i;
            }
            if (i%4==3&&count%2==1) {
                temp=1;
                break;
            }
        }
        if (n%4==3)
            temp=1;

    if(temp==0)
    cout<<"Yes\n";
    else
        cout<<"No\n";
}
    return 0;
}
