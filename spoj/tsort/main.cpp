#include<iostream>
using namespace std;
void mergesort(int[],long int,long int);
void merge(int[],long int,long int,long int);
int main()
{
long long int p,r,i,n;
int a[1000000];
cin>>n;
p=0;
r=n-1;
for(i=0;i<n;i++)
{
     cin>>a[i];
}
mergesort(a,p,r);
for(i=0;i<n;i++)
{
     cout<<"\n"<<a[i];
}
return 0;
}

void mergesort(int a[],long int p,long int r)
{
     if( p < r)
    {
         int q=(p+r)/2;
         mergesort(a,p,q);
         mergesort(a,q+1,r) ;
         merge(a,p,q,r);
     }
}
void merge(int a[],long int p,long int q,long int r)
{
int c[10];
int i=p;
int j=q+1;
int k=p;
while((i<=q)&&(j<=r))
{
if(a[i]<a[j])
{
     c[k]=a[i];
      i=i+1;
     k=k+1;
}
else
{
     c[k]=a[j];
      j=j+1;
      k=k+1;
}
}
while(i<=q)
{
     c[k] =a[i];
     i=i+1;
     k=k+1;
}
while(j<=r)
{
     c[k]=a[j];
     j=j+1;
     k=k+1;
}
int l=p;
while(l<=r)
{
a[l]=c[l];
l=l+1;
}
}
