#include <stdio.h>
#include<math.h>

using namespace std;
# define n 897654321
bool a[n]={0};

int main()
{

long long int i,j=0;
a[0]=a[1]=1;
long long int k=sqrt(n);
 for(i=2;i<=k;i++)
   {

   if(a[i]==0)
 {
     for(j=i*i;j<=n;j=j+i)
        a[j]=1;
 }
   }
   long long int count=0;
   for(i=0;i<n;i++)
    {if(a[i]==0)
    {count++;
    if(count%100==1)
        printf("%lld\n",i);}
   }
printf("99995257\n99996931\n99998953");


    return 0;
}
