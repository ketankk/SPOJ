#include<math.h>
#include<stdio.h>


int pf(int n)
{ long int k=0;
    printf("1");
    while (n%2==0)
    {
       k++;
        n=n/2;
    }
         while(k>0)
        {printf(" x 2");
        k--;}
    for (int i=3; i<=sqrt(n); i=i+2)
    {k=0;
        while (n%i == 0)
        {
            k++;
            n = n/i;

        }
        while(k>0)
        {
        printf(" x %d",i);
        k--;
        }

    }


    if (n > 2)
        printf(" x %d",n);
        printf("\n");
}


int main()
{

int n;
while((scanf("%d",&n)!=EOF))
pf(n);
    return 0;
}
