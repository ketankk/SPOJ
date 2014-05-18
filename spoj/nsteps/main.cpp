#include <stdio.h>
int main()
{
        int x, y, t;
        scanf("%d",&t);
        while(t--)
        {
                scanf("%d %d",&x,&y);
                if(x==y||x==y+2)
                    printf("%d\n",x+y-x%2);
                else printf("No Number\n");
        }
        return 0;
}
