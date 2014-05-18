#include <stdio.h>
#include<math.h>

using namespace std;
# define n 99995250
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
   int m,count;
   while(scanf("%d",&m)!=EOF)
   {count=0;
      for(i=0;i<m;i++)
    {
    if(a[i]==0)
    count++;
    if(count==m)
        printf("%d\n",i);
        break;
    }}

    return 0;
}
