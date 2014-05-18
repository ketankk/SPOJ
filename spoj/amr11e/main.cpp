#include <iostream>

using namespace std;

int main()
{
int t,k=0;
int a[1000]={0},b[1000];
 for(int i=2;i<=1000;i++)
    if(a[i]==0)
 {
     for(int j=i*i;j<=1000;j=j+i)
        a[j]=1;
 }
 for(int i=2;i<1000;i++)
 {
     if(a[i]==0)
     {b[k]=i;k++;}}
     int n;

cin>>t;
while(t--)
{
    cin>>n;
    cout<<6*b[n+1]<<"\n";

}
        return 0;
}

