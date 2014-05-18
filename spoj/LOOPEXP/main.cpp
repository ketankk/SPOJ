#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
int t;
double a[100002];
cin>>t;
a[1]=1.0;
for(int i=2;i<100002;i++)
{
    a[i]=a[i-1]+1.0/(1.0*i);
}

while(t--)
{
int n;
cin>>n;
printf("%.6f\n",a[n]);


}
    return 0;
}
