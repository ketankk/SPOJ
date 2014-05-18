#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
while(true)
{ int l;
    cin>>l;
    if(l==0)
        break;
    float k=(l*l)/(2*3.1415926);
    printf("%.2f\n",k);
    }
    return 0;
}
