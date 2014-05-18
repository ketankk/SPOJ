#include<stdio.h>
#include<iostream>
using namespace std;
int addOne(int x)
{
  int m = 1;

  /* Flip all the set bits until we find a 0 */
  while( x & m )
  {cout<<x<<" ";
    x = x^m;
    cout<<x<<" "<<m;
    m <<= 1;
    cout<<m;
  }

  /* flip the rightmost 0 bit */
  x = x^m;
  return x;
}

int main()
{
  printf("%d", addOne(13));
  getchar();
  return 0;
}
