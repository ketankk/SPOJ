#include <iostream>
#include<stdio.h>

using namespace std;

bool a[1000002];
int main()
 {
  long n=0;
  for(long i = 1; i < 1000000; ++i) {
    if(!(a[i]))
        printf("%d\n",i);
    n = i + (i%10) + (i/10)%10 + (i/100)%10 + (i/1000)%10 + (i/10000)%10 +(i/100000)%10;
    a[n] = 1;
  }
    return 0;
}
