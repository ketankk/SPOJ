#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{ long long int n,a[10002],i,j,k;
while((scanf("%lld",&n)!=EOF))
             {
for(i=0;i<n;i++)
        cin>>a[i];
        cin>>k;
        for(i=0;i<n-k;i++)
        {int high=-1;
            for(j=i;j<i+k;j++)
            {
                if(a[j]>high)
                    high=a[j];
            }
            cout<<high<<" ";
        }
             cout<<"\n";

             }
return 0;
}
