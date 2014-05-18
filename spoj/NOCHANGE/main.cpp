#include <iostream>

using namespace std;

int main()
{ long long int n,k,i,j;
int b[100002]={0},a[100001];
b[0]={1};
cin>>n>>k;
for(i=0;i<k;i++)
        cin>>a[i];
 for(i=0;i<n;i++)
      {
          if(b[i]==1)
            for(j=0;j<k;j++)
          {
              b[i+a[j]]=1;
          }
      }int temp=0;
      for(i=0;i<n;i++)
      if(b[i]==n) temp=1;


        if(temp==1)
        cout<<"YES\n";
      else cout<<"NO\n";

return 0;
}
