#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{ char a[200008];
while((scanf("%s",&a))!=EOF)
{int b[100]={0},l,i;
 l=strlen(a);
 for(i=0;i<l;i++)
 {
     int k=a[i]-'A';
     b[k]++;
 }
 for(i=0;i<l;i++)
 {
     if(b[i]>2)
        cout<<b[i]<<"!"<<char(i+65);
     else
     {
        for(int j=0;j<b[i];j++)
            {if((char(i+65)>65&&char(i+65)<93)||(char(i+65)>96&&char(i+65)<122))
                cout<<char(i+65);
                }
     }
 }
 cout<<"\n";
}
        return 0;
}
