#include <iostream>
#include<stdio.h>
using namespace std;
int count=0;

void tower(int n,char sourcePole,char destinationPole,char auxiliaryPole)
{

    if(0 == n)
        return;
tower(n-1, sourcePole, auxiliaryPole,destinationPole);

tower(n-1, auxiliaryPole, destinationPole,sourcePole);

     cout<<count;
}

int main()
{
   cout<<tower(5, 'S', 'D', 'A');

return 0;
}
