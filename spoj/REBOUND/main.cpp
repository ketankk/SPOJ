#include<stdio.h>
#include<math.h>


int main()
{int t;
long long int x,y,z,k,t1,a,b;
scanf("%d",&t);
while(t--)
{

scanf("%lld%lld%lld",&x,&y,&z);

k=x*x + y*y + 2*y*z;
t1=(long long)sqrt((double)k);
if(t1*t1!=k)
    printf("Not this time.\n");
         else {
           a=x*z+z*t1;
           b=y+2*z;
           if(a%b)
           printf("Not this time.\n");
              else printf("%lld\n",a/b);
}

}
    return 0;
}


