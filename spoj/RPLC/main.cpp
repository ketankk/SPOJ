#include <iostream>

using namespace std;

int main()
{ long long int n;
int t;
cin>>t;
int k=t;
while(t--)
    {
cin>>n;

long long int sum=0,a[n+1],b[n+1],i;
for(i=0;i<n;i++)
        {cin>>a[i];
        sum=sum+a[i];
        b[i]=sum;
        }
long long min=b[0];
  for(i=0;i<n;i++)
if(min>b[i]) min=b[i];
if(min<0)
    min=-1*min;
else min=0;
cout<<"Scenario #"<<k-t<<": "<<min+1<<"\n";
    }
      return 0;
}
