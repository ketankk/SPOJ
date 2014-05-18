#include <stdio.h>

using namespace std;
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{int t,i;
scanf("%d",&t);
while(t--)
{  int a,k;
   char b[255];

    scanf("%d%s",&a,&b);

    if(a==0)
        printf("%s\n",b);

    else{for(i=k=0;b[i]!='\0';i++)
			k=(k*10+b[i]-'0')%a;

    int k1=gcd(a,k);
    printf("%d\n",k1);}
}
    return 0;
}
