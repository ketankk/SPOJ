#include<stdio.h>
#include<math.h>
int prime(int k)
{

	for(int k1=2;k1<=sqrt(k);k1++)
	{
		if(k%k1==0)
		return 0;
	}
	return 1;
}
#define W 100000
int main()
{
	int a,b,i,j,n,A[W],k;
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a,&b);
			if(a==1||a==0)
			A[0]=2;
			else
			A[0]=a;
			j=0;
			while(A[j]!=b)
			{
				A[j+1]=A[j]+1;
				j++;
			}
			A[j+1]=-2;
			j=0;
			while(A[j]!=-2)
			{
				if(A[j]!=-1)
				{
				if(prime(A[j]))
				{
					printf("%d\n",A[j]);
				}
					k=j;
					while(A[k]<=b)
					{
						A[k]=-1;
						k=k+A[j];
					}

				}
				j++;
			}
		}
			printf("\n");

    return 0;
}
