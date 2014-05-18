#include <iostream>
#include<math.h>

using namespace std;

int main()
{
while(1)
    {  int b1,b,g1,g;
        cin>>b1>>g1;
        b=max(b1,g1);
        g=min(b1,g1);

        if(b==-1&&g==-1)
            break;
        if(b==0||g==0)
            cout<<b+g<<"\n";
        else {float k=b/(g+1.0);
         cout<<ceil(k)<<"\n";}
    }    return 0;
}
