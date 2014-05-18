#include <iostream>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
int t,l;
cin>>t;
l=t;
while(t--)
{char str[26];
cin>>str;
long long i=0,p=0,q=0;

        while(str[i]!='/')
        {
            p= 10*p+str[i]-48;
            i++;
        }
        i++;
        while(i<strlen(str))
        {

        q =10*q+str[i]-48;
        i++;
        }


    int count = 0;
        while((q%2==0)&&p<=q)
    {
        q=q/2;
        count++;
    }
cout<<"Case #"<<l-t<<": ";
        if(count)
            cout<<count<<"\n";
    else cout<<"impossible\n";
    }return 0;
}
