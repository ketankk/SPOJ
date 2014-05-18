#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int t;
    char n[51];
    cin>>t;

while(t--)
    {

        cin>>n;
        int temp=0;
        int l=strlen(n);
        for(int i=0;i<l;i++)
        {
            if(n[i]=='D')
                {temp=1; break;}
        }if(temp==1)
        cout<<"You shall not pass!\n";
                else cout<<"Possible\n";

    }
 return 0;
}
