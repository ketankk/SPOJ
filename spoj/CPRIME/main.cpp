#include <stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    int M=1000000,i,j;
bool a[M];
a[0]=1,a[1]=1;
for(i=2;i<=M;i++)
    a[i]=0;

   for(i=2;i*i<=M;i++)
   {
        if(a[i]==0)
            {
                for(j=i*i;j<=M;j=j+i)
                a[j]=1;
            }

  }

while(1){

    int n;
      scanf("%d",&n);
  if(n==0)
    break;
int b[10000]={0},k=0;
  for(int l=0;l<n;l++)
    {if(a[l]==0)
       b[k]=l;
       k++;
    }
    for(int l=0;i<k;l++)
        printf("%d\n",b[l]);

}
    return 0;
}
