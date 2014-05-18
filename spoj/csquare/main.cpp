#include <iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;


/*int power(int a,int b,int m)
{
    int ans=1,t=a;
    while(b!=0)
    {
        if(b&1)
            ans=(ans*t)%m;
        t=t*t;
        t=t%m;
        b=b>>1;

    }
    return ans;
}
*/


int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        int a,m;
        char b[252];
        scanf("%d%s%d",&a,&b,&m);
        /*cin>>b;
        cin>>m;*/

        int i=0;
        int l=strlen(b);
        long int j=1,t=a;
        while(b[i]!='\0')
       {
           if(b[l-i-1]=='1')
            j=(j*t)%m;
           if(b[l-i-1]=='2')
            j=(j*t*t)%m;
           t=(t*t*t)%m;

          i++;
       }

        //k=power(a,b,m);
        printf("%d\n",j);
    }
 return 0;
}
