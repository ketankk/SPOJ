#include <iostream>

using namespace std;
int MAX=10000;
int main()
{
    int n,a[3][10],gt[10]={0};
cout<<"Enter no. of processes\n";
cin>>n;
cout<<"Enter Arrival Time and Burst Time\n";
for(int i=0;i<n;i++)
cin>>a[0][i]>>a[1][i];
cout<<"\n\n";
for(int i=0;i<n;i++)
cout<<i<<"\t"<<a[0][i]<<"\t"<<a[1][i]<<"\n";
 int k=0,c=0,index;
 gt[0]=a[0][0]+a[1][0];
 a[1][0]=MAX;
while(gt[c]<=a[0][k])
    k++;
int minimum=MAX;
    for(int l=0;l<k;l++)
    {
            if(minimum<a[1][l])
            {
                minimum=a[1][l];
               index=l;
            }
            gt[c++]=gt[c]+minimum;
            a[1][index]=MAX;

    }

for(int i=0;i<n;i++)
    cout<<gt[i]<<"\n";
    return 0;
}
