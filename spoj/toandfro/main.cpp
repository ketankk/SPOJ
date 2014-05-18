#include <iostream>
#include<string.h>
using namespace std;

int main()
{
char ch[100];
while(1){
int n,i=0;
cin>>n;
if(n==0)
    break;
cin>>ch;

int l=strlen(ch);
   int j=0,m=l/n;
//cout<<l<<m<<n;
char str[10][10];
int k=0;
while(ch[i]!='\0')
{  str[j][k]=ch[i];
    k++;
    i++;
//cout<<ch[i]<<k<<i;

if(k==n)
{
    k=0;
    j++;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<str[j][i]<<" ";

}
cout<<"\n";
}/*
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<str[j][i]<<" ";
}*/

return 0;
}
