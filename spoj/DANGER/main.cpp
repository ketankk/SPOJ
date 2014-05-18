#include <iostream>
#include<math.h>
using namespace std;

int main()
{
while(1)
{
char ch[5];
cin>>ch;
int a=ch[0]-'0';
int b=ch[1]-'0';
int c=ch[3]-'0';
long long n=(10*a+b)*(pow(10,c));
if(ch[0]=='0'&&ch[1]=='0'&&ch[3]=='0')
    break;
long long k=log2(n);
n=2*(n - pow(2,k))+1;

cout<<n<<"\n";



}
    return 0;
}
