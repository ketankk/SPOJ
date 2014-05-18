#include <iostream>

using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    long int sum=0,k,a[100002];

    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    sum=sum+a[i];
    }
    int avg=sum/n;
    int count=1;
    k=sum;
    while(k>avg)
    {
        k=sum/count;
        count++;
    }
    cout<<count-2<<"\n";
}
        return 0;
}
