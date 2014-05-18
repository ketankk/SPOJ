#include <iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{  int t;
    cin>>t;
    while(t--)
        {
    int n,a[11],b[11],i,sum;
    scanf("%d", &n);
		sum = 0;
		for(i=0; i<n; i++)
            scanf("%d", &a[i]);
		for(i=0; i<n; i++)
		    scanf("%d", &b[i]);
		sort(a, a+n);
		sort(b, b+n);
		for(i=0; i<n; i++)
		sum += a[i]*b[i];
		printf("%d\n", sum);
    }
    return 0;
}
