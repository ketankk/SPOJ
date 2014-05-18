#include <iostream>
#include<algorithm>
#include<cstring>
int b[1000002]={0};
using namespace std;

int main()
{
 long long a[102];
 int t,n,i;
cin>>t;

while(t--)
{
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
    b[a[i]]++;
}long long int count=0;
sort(a,a+n);
for(i=0;i<n;i++)
{
    if(b[a[i]]>0&&b[2*a[i]]>0)
{
    count++;
    b[a[i]]--;
    b[2*a[i]]--;
}
}
cout<<count<<"\n";
}
    return 0;
}
