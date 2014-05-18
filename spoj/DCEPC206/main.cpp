#include <stdio.h>

using namespace std;

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n,a[100000]={0};
    scanf("%d",&n);

   int sum=0;

    for(int i=0;i<n;i++)
    {   scanf("%d",&a[i]);
        for(int j=0;j<i;j++)
        {
         if(a[i]>a[j])
        sum=sum+a[j];
        }
    }printf("%d\n",sum);
}
        return 0;
}
