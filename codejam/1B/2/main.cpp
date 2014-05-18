#include <iostream>

using namespace std;

int main()
{
    int t,l;
cin>>t;
l=t;
while(t--){
        int a,b,k,count=0;
    cin>>a>>b>>k;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if((i&j)<k)
                count++;

        }
    }
    cout<<"Case #"<<l-t<<": "<<count<<"\n";

}    return 0;
}
