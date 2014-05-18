#include <iostream>

using namespace std;


int main()
{
long int n,k;
cin>>n>>k;
long long int a[n+1];
long long int maxm = -20000000;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    maxm = max(maxm,a[i]);


}
while(k--)
{
   for(int i=0;i<n;i++)
        maxm = max(maxm,a[i]);
    for(int i=0;i<n;i++)
        a[i] = maxm-a[i];

}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n";
    return 0;
}
