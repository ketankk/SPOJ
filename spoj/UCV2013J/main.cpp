#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int n,a[1000001];
while(1)
{
cin>>n;
if(n==0)
    break;
int m=n/2+n%2;;
int sum=0;
for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i>n-m)
             sum=sum+a[i];

        }
        cout<<sum<<"\n";
}

return 0;
}
