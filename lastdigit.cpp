#include<iostream>
using namespace std;

int main()
{unsigned long b1;
int a1,b,a,t,i=0,l,m;
cin>>t;
while(i<t)
{ cin>>a1;
cin>>b1;
a=a1%10;
b=b1%4;
if(b1==0)
{cout<<1<<"\n";
break;}
if(a==1||a==5||a==6||a==0)
cout<<a<< "\n";
if(a==2||a==8)
{if(a==2)
m=8;
else
m=2;
if(b==1)
cout<<a<<"\n";
if(b==2)
cout<<4<<"\n";
if(b==3)
cout<<m<<"\n";
if(b==0)
cout<<6<<"\n";
}
if(a==3||a==7)
{if(a==3)
l=7 ;
else
l=3;
if(b==1)
cout<<a<<"\n";
if(b==2)
cout<<9<<"\n";
if(b==3)
cout<<l<<"\n";
if(b==0)
cout<<1<<"\n";
}
if(a==9||a==4)
{m=a*a;
if(b==1||b==3)
cout<<a<<"\n";
if(b==2||b==0)
cout<<m%10<<"\n";
}

i++;
}

return 0;
}
