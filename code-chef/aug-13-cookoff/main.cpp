#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
    int x1,x2,x3,y1,y2,y3,l1,l2,l3;
    int count=0;
    cin>>t;
    while(t--)
    {
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    l1=pow((x2-x1),2)+pow((y2-y1),2);
    l2=pow((x3-x1),2)+pow((y3-y1),2);
    l3=pow((x2-x3),2)+pow((y2-y3),2);
    if((l1+l2==l3)||(l2+l3==l1)||(l3+l1==l2))
        count++;

    }cout<<count;
    return 0;
}
