#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int j,k=30;
    long double fact1=1,sum=1;
    for(j=1;j<k;j++)
    {
      fact1=j*fact1;
        sum=sum+(1/fact1);
    }cout<<setprecision(2030)<<sum;
    return 0;
}
