#include <iostream>
#include<string.h>
#include<math.h>

using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{
int t;
cin>>t;
while(t--)
{
char a[15],b[6];
cin>>a;
int l=strlen(a);
int i=0,j;
while(a[i]!='.')
    i++;
int k=i,no=0,x=1;
for(j=k;j<l-1;j++)
    {
        int s = a[++i]-'0';
        //cout<<s<<"\n";
        no=10*no+s;
        x=x*10;
        //cout<<no<<"\n";
    } //cout<<no<<"\n";
    //l=pow(10,l-k+1);
    //cout<<l<<" "<<x<<"\n";
    no=gcd(x,no);
   // cout<<no<<"\n";
   cout<<x/no<<"\n";
}
    return 0;
}
