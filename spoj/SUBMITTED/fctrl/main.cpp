#include <iostream>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {


       long int n,sum=0;
    cin>>n;
    long int k=n;
    while(k>=5)
    {
    k=k/5;
    sum=sum+k;
    }
    cout<<sum<<endl;
    }
    return 0;
}
