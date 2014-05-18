#include <iostream>
#include<math.h>
using namespace std;

int dec2bin(int k)
{
long long int j=0,l=0,sum=0,i;
int str[100];
while(k>0)
{
    i=(k%2);

    str[l++]=i;
    k=k/2;
    j++;
}i=0;
while(j--)
    {
    sum=sum+pow(2,i)*str[j];
    i++;}
cout<<sum<<"\n";
}

int main()
{    int t;
cin>>t;
while(t--)
    {
        int n;
cin>>n;
if(n%2==0)
    dec2bin(n);
    else cout<<n<<"\n";
    }

    return 0;
}
