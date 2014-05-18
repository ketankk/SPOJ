#include <iostream>

using namespace std;

int main()
{
   int t;

   cin>>t;
   while(t--)
   {
       int k1,k2;
   int sum1=0,sum2=0,sum3=0;
   int n1,n2,n3;
cin>>k1>>k2;
while(k1!=0)
   {
    n1=(k1%10);
    sum1=10*sum1+n1;
    k1=k1/10;
            if(n1==0&&(k1/10)<0) k1=k1/10;

   }
while(k2!=0)
    {
    n2=(k2%10);
    sum2=10*sum2+n2;
    k2=k2/10;
        if(n2==0&&(k2/10)<0) k2=k2/10;

   }

   int sum=sum1+sum2;
   while(sum!=0)
    {
    n3=(sum%10);
    sum3=10*sum3+n3;
    sum=sum/10;
    if(n3==0&&(sum/10)<0) sum=sum/10;
   }
cout<<sum3<<endl;
   }
    return 0;
}
