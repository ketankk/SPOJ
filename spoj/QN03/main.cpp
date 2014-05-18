#include <iostream>
#include<string.h>

using namespace std;

int main()
{int t;
cin>>t;
while(t--)
{char a[1002];
cin>>a;
int count=0;
int n=strlen(a);

if(a[0]=='1')
    count++;
for(int i=0;i<n-1;i++)
    if(a[i+1]!=a[i])
        count++;
   cout<<count<<"\n";}
return 0;
}
