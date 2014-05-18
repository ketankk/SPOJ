#include <iostream>

using namespace std;

int main()
{
int n,a[100]={0};
cin>>n;
 for(int i=2;i<=n;i++)
    if(a[i]==0)
 {
     for(int j=i*i;j<=n;j=j+i)
        a[j]=1;
 }
 for(int i=2;i<n;i++)
cout<<a[i]<<" ";
    return 0;
}
