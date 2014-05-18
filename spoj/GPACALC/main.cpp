#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{ int b[90],n,a[20],i;
   char k;
   b[83]=10.0;
   b[65]=9.0;
   b[66]=8.0;
   b[67]=7.0;
   b[68]=6.0;
   b[69]=5.0;

    cin>>n;
    float sum=0.0,temp=0.0;
    for(i=0;i<n;i++)
       {
            cin>>a[i]>>k;
            int j=k;
            sum=sum+a[i]*b[j];
            temp=temp+a[i];
       }
       float r=sum/temp;
      printf("%.2f\n",r);
}
        return 0;
}
