#include <iostream>
#include<stdio.h>

using namespace std;


int main()
{
   long long  int n,m,t;
cin>>t;
int p=t;
while(t--)
{
    cin>>m>>n;
long long int a=0,k[200];
long long int c,b=1;
k[1]=0,k[2]=1;
for(int i=3;i<=m+n;i++)
{
c=(a+b)%100000;
a=b%100000;
b=c%100000;
k[i]=c;
}sort(a,a+n);
printf("Case %d: ",p-t);
for(int i=m;i<=m+n;i++)
cout<<k[i]<<" ";
cout<<"\n";

}
    return 0;
}
