#include <iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
int t;
cin>>t;
int k=t;
while(t--)
{ int n,a[1001];
long long int s,sum=0;
    cin>>s>>n;
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        sum=sum+a[i];
        }
        if(s>sum)
       printf("Scenario #%d:\nimpossible\n",k-t);
       else
        {
          sort(a, a+n);
    int i,count=0;
    sum=0;
    for(i=n-1;i>=0;i--)
    {
        sum=sum+a[i];
        count++;
        if(sum>=s)
            break;

    }
       printf("Scenario #%d:\n%d\n",k-t,count);
    }
}

    return 0;
}
