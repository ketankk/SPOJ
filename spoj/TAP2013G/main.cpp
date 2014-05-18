#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
int s,a[100001],b[100001],i;
cin>>s;

for(i=0;i<s;i++)
cin>>a[i];

for(i=0;i<s;i++)
cin>>b[i];

sort(a,a+s);
sort(b,b+s);
int j=0,count=0;
i=0;
while(1)
{
    if(b[s-i-1]>a[s-j-1])
    {
        i++;
        j++;
        count++;
    }


    else j++;
    if(j>=s)
        break;
}
cout<<count<<"\n";
        return 0;
}
