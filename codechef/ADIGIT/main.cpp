#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int sum[100005]={0};
void fun(char a[],int n)
{
    int aux[12]={0};
    int k;
    for(int i=0;i<n;i++)
    {k=a[i]-'0';

    for(int j=0;j<10;j++)
    {
        sum[i]+=(abs(k-j))*aux[j];
    }
aux[k]++;
    }

}

int main()
{
int n,m;
char a[100005];
scanf("%d%d",&n,&m);
cin>>a;
fun(a,n);
while(m--)
{int k;
    cin>>k;
    /*int sumP=0,l1,l2;
    for(int j=0;j<k;j++)
    {
        l1=a[j]-'0';
        l2=a[k-1]-'0';
        sumP=sumP+ abs(l1-l2);

    }*/

            //printf("%d\n",sum[k]);


cout<<sum[k-1]<<"\n";
}
    return 0;
}
