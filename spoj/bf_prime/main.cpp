#include <iostream>

using namespace std;

int main()
{
int a[100]={0};
int t;

 for(int i=2;i<=100;i++)
    if(a[i]==0)
 {
     for(int j=i*i;j<=100;j=j+i)
        a[j]=1;
 }
 for(int i=2;i<100;i++)
 {
     if(a[i]==0)
cout<<i<<",";
 }

    return 0;
}
