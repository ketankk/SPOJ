#include <iostream>


using namespace std;

int main()
{  int n,i,k=4,a[10];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    while(k)
        {
    for(i=0;i<n-1;i++)
        a[i]=a[i]-a[i+1];
    n--;
    k--;
    }
    for(i=0;i<n;i++)
    if(a[i]!=0){
        cout<<"no"; break;}
        else cout<<"YES";
    return 0;
}
