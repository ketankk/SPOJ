#include <iostream>
#include<stdio.h>

using namespace std;

  int main()
  {
      int t;
      scanf("%d",&t);
      while(t--)
      {
         int n,u,l,r,val;
         scanf("%d%d",&n,&u);
         int t[n+2],a[n+1],count=0;
         for(int i=0;i<=n;i++)
            t[i]=0;
         while(u--)
         {
             scanf("%d%d%d",&l,&r,&val);
             t[l]+=val;
             t[r+1]-=val;

        }
        for(int i=0;i<n;i++)
        {
            count+=t[i];
            a[i]=count;
        }
        int q,index;
        scanf("%d",&q);
        while(q--)
        {
            scanf("%d",&index);
            printf("%d\n",a[index]);
        }
      }
      return 0;
  }
