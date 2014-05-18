#include <iostream>
#include<math.h>

using namespace std;

int main()
{
   int n,count=0;
   long int k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int i=0;i<n;i++)

   {
     for(int j=i+1;j<n;j++)
     {int m=fabs(a[i]-a[j]);
         if(m==k)
            count++;
     }
   }
   cout<<count;


    return 0;
}
