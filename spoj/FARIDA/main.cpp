#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
int k=t;
while(t--)

{ int n;
    cin>>n;
    if(n==0)
        cout<<"Case "<<k-t<<": 0\n";
    else{
    long long int a[10005]={0},p[10005]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
        p[0]=a[0];
        p[1]=max(a[1],a[0]);
    for(int i=2;i<n;i++)
      p[i]=max(a[i]+p[i-2],p[i-1]);
      cout<<"Case "<<k-t<<": "<<p[n-1]<<"\n";
    }

}

    return 0;
}
