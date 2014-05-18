#include <iostream>

using namespace std;

int main()
{ int n=10001,i,j;
bool a[10002]={0};
for(i=3;i<n;i+=2)
{ if(a[i]==0)
for(j=i*i*i;j<n;j+=j)
         a[j]=1;
}

int t;
//scanf("%d",&t);
cin>>t;
while(t--)
{int k;
cin>>k;
int count=0;
for(i=1;i<k;i++)
if(a[k]==0)
count++;
        if(!count)
            cout<<count<<"\n";
        else cout<<"Not Cube free\n";


}

        return 0;
}
