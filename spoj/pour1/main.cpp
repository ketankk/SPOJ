#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a)<(b)) ? (a) : (b) )
int took(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
int main(void)
{
        int t,i,min,max,steps,turn,turn1,ca,cb,sum;
	int a[100],b[100],c[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d %d %d",&a[i],&b[i],&c[i]);

  	for(i=0;i<t;i++)
    	{
      		if (c[i] > a[i] && c[i] > b[i])
		{
   			printf("-1\n");
			continue;
		}
		else if (c[i] == 0)
		{
   			printf("0\n");
			continue;
		}
		else if (c[i] == a[i] || c[i] == b[i])
		{
   			printf("1\n");
			continue;
		}
		else if (c[i]%took(a[i], b[i]) != 0)
		{
   			printf("-1\n");
			continue;
		}
		else
		{

			turn=0;
			turn1=0;
			ca=0;
			cb=0;
			while (ca != c[i] && cb != c[i])
			{
  				if (ca==0)
				{
					ca=a[i];
					turn++;
				}
  				else if (cb==b[i])
				{
					cb=0;
					turn++;
				}

 				else
				{
					sum = ca + cb;
                			cb = min(sum,b[i]);
                			ca = sum - cb;
					turn++;
				}
			}
			ca=0;
			cb=0;
			while (ca != c[i] && cb != c[i])
			{
  				if (cb==0)
				{
					cb=b[i];
					turn1++;
				}
  				else if (ca==a[i])
				{
					ca=0;
					turn1++;
				}

 				else
				{
					sum = ca + cb;
                			ca = min(sum,a[i]);
                			cb = sum - ca;
					turn1++;
				}
			}
			printf("%d\n",min(turn,turn1));

    		}
    	}

  return 0;
}
