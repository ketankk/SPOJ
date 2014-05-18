#include <iostream>

using namespace std;

void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}

void permute(char *a,int i,int n)

{
    int j;
    if(i==n)
     cout<<a<<"\n";
        else
        {
            for(j=i;j<=n;j++)
        {
        swap(a+i,a+j);
        permute(a,i+1,n);
        swap(a+i,a+j);
        }
        }

}
int main()
{
    char a[]="ABC";
    /*char b[]="DCBA";
    cout<<a<<" "<<b<<"\n";
    swap(a,b);
    cout<<a<<" "<<b<<"\n";
    cout << "Hello world!" << endl;*/
    permute(a,0,3);
    return 0;
}
