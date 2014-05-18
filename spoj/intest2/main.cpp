
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){


  int n,k,t,count;


  count=0;

  scanf("%i%i",&n,&k);

  for (n; n>0; n--)
  {
    scanf("%i",&t);
    if(t% k==0) count++;
  }

 printf("%i",count);
 return 0;
}
