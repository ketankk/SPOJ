#include <iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

  int main()
  {
      /*int t;
      scanf("%d",&t);
      while(t--)
      {*/
         int n,k,l,r;
         scanf("%d%d",&n,&k);
         int t[n+2],a[n+1],count=0;
         for(int i=0;i<=n;i++)
            t[i]=0;
        while(k--)
         {
             scanf("%d%d",&l,&r);
             t[l]++;
             t[r+1]--;

        }
        for(int i=0;i<n;i++)
        {
            count+=t[i];
            a[i]=count;
        }
            sort(a,a+n);
            printf("%d\n",a[n/2]);

      //}
      return 0;
  }
