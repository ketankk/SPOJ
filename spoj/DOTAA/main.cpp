#include <iostream>

using namespace std;

int main()
{int t;
cin>>t;
while(t--)
{
int a,b,c,arr[501];
int count=0;
cin>>a>>b>>c;
for(int i=0;i<a;i++)
{
    cin>>arr[i];
    count=count+arr[i]/c;
    if(arr[i]%c==0)
        count--;

}
if(count>=b)
    cout<<"YES\n";
else cout<<"NO\n";
}
return 0;
}
