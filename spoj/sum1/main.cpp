#include <iostream>

using namespace std;



long long int sum(unsigned long long int n,int k)
{
    unsigned long long int j=(n-1)/k;
    return (j*(2*k+(j-1)*k))/2;
}

int main()
{
int t;
long long int n;
cin>>t;
while(t--)
{
cin>>n;
if(n==0)
    cout<<"\n0";
else
cout<<(sum(n,3)+sum(n,5)-sum(n,15))<<"\n";
    }
    return 0;
}
