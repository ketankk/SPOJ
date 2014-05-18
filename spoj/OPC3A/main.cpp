#include<iostream>
using namespace std;
#define MOD 1000000007
int a[1000001];
int main(){
      int t,n,i;
      a[0]=1,a[1]=2;
      for(i=2;i<1000001;i++)
           a[i]=(a[i-1]*a[i-2])%MOD;

    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<"\n";
    }
    return 0;
}
