#include <iostream>

using namespace std;

int cost()
{   for(i=0;i<n;i++)
        {
            v[i][i]=a[i];
            v[i][i+1]=max(a[i],v[i][i]);
        }
   v[i][j]=max(min(v[i+1][j-1],v[i+2][j]),min(v[i][j-2],v[i+1][j-1]));
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
