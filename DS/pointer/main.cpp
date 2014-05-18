#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int *a,**c;
    int b=9;
    a=&b;
    *a=19;
//    c=&b;
    c=&a;
    cout<<a<<" "<<*a<<" "<<&a<<" "<<b<<"\n";
    return 0;
}
