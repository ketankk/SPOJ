#include <stdio.h>
int main(){long int t,n;scanf("%ld",&t);while(t--){scanf("%ld",&n);if(n%35==0)printf("fizzbuzz\n");else if(n%5==0)printf("fizz\n");else if(n%7==0)printf("buzz\n");else printf("%ld\n",n);}}
