#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{int t,x,y,l;
scanf("%d",&t);

while(t--)
{
    scanf("%d,%d",&x,&y);
    l=sqrt(2*(x*x+y*y)+x*y);
    printf("%d,%d,%d",x,y,l);
    printf("%f",l);
}   return 0;
}
