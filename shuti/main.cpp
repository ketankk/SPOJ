#include<stdio.h>
#include<math.h>
#include<conio.h>

void check_zero(int a)
{
 int count=0,sum=0;
while(a>=5)
{sum=a/5;
count=count+sum;
a=sum;
}

printf("%d \n",count);
}
int main()
{ int n,i,a[100];
scanf("%d",&n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
for (i=0;i<n;i++)
{check_zero(a[i]);}
getch();
return 0;
}
