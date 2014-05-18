#include <iostream>

using namespace std;


int height(char str[],int i){

if(str[i]=='l')
    return 1;
else {
        return max(height(str,i+1),height(str,i+2))+1;

}

}

int main()
{
int t;
cin>>t;
while(t--){
    char str[1000];
    cin>>str;
    cout<<height(str,0)-1<<"\n";

}
return 0;
}
