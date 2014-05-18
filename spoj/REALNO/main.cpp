#include <iostream>

using namespace std;

int main()
{int t;
cin>>t;
while(t--)
    {
long long int n;
cin>>n;
float a[n+1];

for(int i=0;i<n;i++)
        cin>>a[i];
int temp=0;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
   {
    if(a[i]+a[j]>1&&a[i]+a[j]<2)
    {temp=1;
break;}
   }
if(temp==1)
cout<<"found\n";
else cout<<"not found\n";
   }return 0;
}
