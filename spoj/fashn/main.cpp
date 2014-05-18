#include <iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{  int t;
    cin>>t;
    while(t--)
        {
    int n,a[2004],i,sum;
    scanf("%d", &n);
		sum = 0;
		for(i=0; i<n; i++)
            scanf("%d", &a[i]);
		for(i=n; i<2*n; i++)
		    scanf("%d", &a[i]);
		sort(a, a+n);
		sort(a+n, a+(2*n));
		for(i=0; i<n; i++)
		sum += a[i]*a[i+n];
		printf("%d\n", sum);
    }
    return 0;
}
