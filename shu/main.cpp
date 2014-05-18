#include<stdio.h>

int main()
{ int t,n,a,c[40],i;
float avg=0,sum=0,sumc=0;
char gr[40];
scanf("%d",&t);
while(t--)
{scanf("%d",&n);

for( i=0;i<n;i++)
{scanf("%d",&c[i]);
scanf("%c",&gr[i]);
if(gr[i]=='S')
a=10;
else if(gr[i]=='A')
a=9;
else if(gr[i]=='B')
a=8;
else if(gr[i]=='C')
a=7;
else if(gr[i]=='D')
a=6;
else
a=5;
sumc=sumc+c[i];
sum=sum+a*c[i];
}


printf("%.2f",sum/sumc);
}


return 0;
}
