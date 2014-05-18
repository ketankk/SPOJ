#include <stdio.h>
#include<math.h>

using namespace std;

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {

int a,b,c;
float s;
scanf("%d%d%d",&a,&b,&c);
float sum=sqrt(3)*((a*a+b*b+c*c)/4.0);

s=(a+b+c)/2.0;
s=sqrt(s*(s-a)*(s-b)*(s-c));
s=s*3.0;
sum=sum+s;
sum=sum/2.0;
printf("%.2f\n",sum);
  }
    return 0;
}
