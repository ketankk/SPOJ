#include <iostream>

using namespace std;

int main()
{
long int i,j=0;
long int a[10001]={0},b[10001]={0};
a[0]=a[1]=1;
 for(i=2;i<=1000;i++)
   {

   if(a[i]==0)
 {
     for(j=i*i;j<=1000;j=j+i)
        a[j]=1;
 }
   }
   for(i=0;i<1000;i++)
   {
       if(a[i]==0)
        b[j]=i;
        j++;
   }
   /*for(i=0;i<1000;i++){
   if(a[i]==0)
    b[j]==i;
    if(a[i]==1)
        i++;

   j++;}*/
   //cout<<b[0];


    return 0;
}
