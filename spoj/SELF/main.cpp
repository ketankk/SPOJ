#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n;
string a;
cin>>n;
cin>>a;

if(n<0)
{n=-1*n;
    reverse(a.begin(), a.end());}

for(int i=0;i<n;i++)
    cout<<a;
    return 0;
}
