#include<stdio.h>
using namespace std;
int main()
{int n=10;char ch[20];while(n--){int i=0,count=1;scanf("%s",&ch);while(ch[i]!='\0'){if(ch[i]=='T'||ch[i]=='D'||ch[i]=='L'||ch[i]=='F')count=count*2;i++;}printf("%d\n",count);}return 0;}
