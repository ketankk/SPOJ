#include <iostream>
#include<math.h>
using namespace std;

char convert(int n)
{   int str[10];
int sum=0,i=0,k=0,j,m=12;
    while(m--)
    {
       j=str[k++]=n%(-2);
cout<<j;
//cout<<str[k-1];
        sum=sum+pow((-2),i++)*j;
        n=n/2;
    }
    return 0;
}
int main()
{
 int n,t;
 cin>>t;
 while(t--)
{
cin>>n;
cout<<n%(-2);
//convert(n);
}
    return 0;
}
