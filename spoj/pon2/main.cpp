#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{ int t;
cin>>t;
while(t--)
{   long long int i,n;
    cin>>n;
    int temp=0,k=7;

    if(n==2)
        cout<<"YES\n";
    else
        {
            while(k--)
            {
            i=rand()%n+1;
            cout<<i<<" ";

            i=pow(i,(n-1));

            if(i%n!=1)
            temp=1;
           }
    if(temp==0)
        cout<<"YES\n";
        else
            cout<<"NO\n";
    }}
    return 0;
}

