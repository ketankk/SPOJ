#include <iostream>

using namespace std;

int main()
{char ch[22];
int a[21]={1,2,3,2,5,1,7,2,3,1,11,1,13,1,1,2,17,1,19,1};
do
{  int i=0;
long long int no=1;
   cin>>ch;
   if(ch[0]=='*')
    break;
while(ch[i]!='\0'){

 if(ch[i]=='Y')
    no=no*a[i];
    if(ch[i]=='N')
         {no=no*1;
         if(no%(i+1)==0)
         {
             no=-1;
             break;
         }}
         i++;
}
   cout<<no<<"\n";;
}while(ch[0]!='*');

    return 0;
}
