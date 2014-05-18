#include <iostream>

using namespace std;

int main()
{
char ch[200002];
int k,t;

cin>>t;
while(t--)
{char temp[100];
    cin>>k;
    cin>>ch;
    int i=0;
int t=k;
k=k%26;
while(ch[i]!='\0')
{  temp[i]=ch[i];
        if(ch[i]=='.')
    ch[i]=' ';
       else
        if(ch[i]>96)
       {ch[i]=ch[i]+k-97;
       ch[i]=ch[i]%26+97;
       if(t>25)
        ch[i]=ch[i]-32;
       }
       else if(ch[i]<91)
       {
           ch[i]=ch[i]+k-65;
           ch[i]=ch[i]%26+65;
       if(t>25)
        ch[i]=ch[i]+32;

       }
       i++;
}
cout<<ch<<"\n";
}
    return 0;
}
