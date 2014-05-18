#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
long long int t;
cin>>t;
while(t--)
{ long long int n,k;

    cin>>n>>k;
    if(k==0)
        cout<<"0\n";
    else cout<<k-1<<"\n";
}
        return 0;
}
