#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;

while(n--)
{char str[1002];
cin>>str;
int a[1000]={0},i=0,temp=0;

while(str[i++]!='\0')
{
    int k=str[i];
    if(str[i]!=' ')
    a[k]++;
    temp=max(temp,a[k]);
}
cout<<temp<<"\n";
}
        return 0;
}
