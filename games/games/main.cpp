#include<iostream>
using namespace std;

#include<string.h>
int findgcd(int  a, int b){
    if(b==0)
    return a;
    else
    return findgcd(b,a%b);
    }
int main()
{char num[15];
int t,count,dig,prod,dec,tens;
cin>>t;
while(t--)
{
dig=0;
count=0;
tens=1;
dec=0;
cin>>num;
for(int i=0;i<strlen(num);i++)
{
if(num[i]=='.')
count=i;

}
//cout<<count<<"\n";
dig=strlen(num)-count-1;
for(int i=count+1;i<strlen(num);i++)
{dec=10*dec+(num[i]-'0');
tens=10*tens;

}
//cout<<dec<<"\n";

//for(int i=1;i<=dig;i++)
//tens=10*tens;
int k=findgcd(dec,tens);
//cout<<k;
cout<<(tens/k)<<"\n";
}
return 0;
}
