#include <iostream>
#include<string.h>
using namespace std;

int main()
{
char ch1[20]={"AMITABH BACHCHAN"},ch2[15]={"RAJNIKANTH"};
int l1,l2,i,j;

l1=strlen(ch1);
l2=strlen(ch2);
for(i=0;i<l2;i++)
{ int temp=0;

    for(j=0;j<l1;j++)

{
    if(ch2[i]==ch1[j])
        temp=1;

}if(temp)
        cout<<ch2[i]<<"\n";

}
    return 0;
}
