#include <iostream>
#include<algorithm>
#include<math.h>

using namespace std;
double area(int a,int b,int c)
{
    int s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
int t,n,a[1002],i;
cin>>t;
while(t--)
{
   cin>>n;
   for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
   //for(i=0;i<n;i++)
     //   cout<<a[i];
    int a1=0,b=0,c=0;
   for(i=n-1;i>=0;i--)
        {  a1=a[i];
            b=a[i-1];
            c=a[i-2];
            if((a1<b+c)&&(b<a1+c)&&(c<a1+b))
                break;
                else a1=0,b=0,c=0;
        }
cout<<a1<<b<<c;
cout<<area(a1,b,c)<<"\n";
    }
    return 0;
}
