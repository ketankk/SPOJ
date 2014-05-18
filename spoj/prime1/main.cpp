#include<iostream>
#include<stdio.h>
//#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        int m,n;
        scanf("%d %d\n", &m, &n);
    int * pr = new int[n-m+1];
    for(int i=0;i<n-m+1;++i)
    pr[i] = 0;
    for(int p=2;p*p<=n;++p)
    {
        int less = m / p;
        less *= p;
        for(int j=less;j<=n;j+=p) if(j != p && j >= m)
        pr[j - m] = 1;
        }
        for(int i=0;i<n-m+1;++i)
        {
        if(pr[i] == 0 && m+i != 1)
        printf("%d\n",m+i);
        }
        if(t)
        printf("\n");
        delete [] pr;
        }
        }
