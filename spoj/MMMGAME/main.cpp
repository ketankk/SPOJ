#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n,a[50],c=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]==1)
            count++;
        c=c^a[i];
        }
        if(count==n)
        {if(n%2==0)
        cout<<"John\n";
        else  cout<<"Brother\n";

        }
        else{
        if(c==0)
            cout<<"Brother\n";
        else cout<<"John\n";}

}return 0;
}
