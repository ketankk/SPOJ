#include <iostream>
#include<stack>

using namespace std;

int main()
{int t=1;
while(1){
    char str[2002];
    cin>>str;
    if(str[0]=='-')
        break;
    stack<char>var;
    int i=0,count=0;
    while(str[i]!='\0'){
            if(str[i]=='{')
            var.push(str[i]);
            if(str[i]=='}')
            {
                if(!(var.empty()))
                  var.pop();
            else{
                count++;
                var.push('{');
            }
            }

i++;
    } cout<<"\r";
    cout<<t++<<". "<<(var.size())/2+count<<"\n";
}    return 0;
}
