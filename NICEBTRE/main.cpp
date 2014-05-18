#include <iostream>
#include<string>
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
struct binar_tree
{
    char val;
    struct binar_tree *le;
    struct binar_tree *ri;
};
struct binar_tree *make_tree(char *str,int i)
{
        struct binar_tree *temp=new binar_tree;
        temp->val=str[i];
        temp->le=temp->ri=NULL;
        if(str==NULL)
        {
            delete(temp);
            return NULL;
        }
       // cout<<"saurabh\n";
        if(str[i]=='l')return temp;
        i=i+1;
        temp->le=make_tree(str,i);
        i=i+1;
        temp->ri=make_tree(str,i);
        return temp;

}
void preorder(struct binar_tree *root)
{
    if(root==NULL)return;

    preorder(root->le);
      cout<<root->val<<"\t";
    preorder(root->ri);
}
int maxD(struct binar_tree *node)
{
   if (node==NULL)
       return 0;
   else
   {
       int l=maxD(node->le);
       int r = maxD(node->ri);

       if (l>r)
           return(l+1);
       else return(r+1);
   }
}
int height(char arr[],int root)
{
	if(arr[root]=='l')return 0;
	int lheight=0,rheight=0;
	lheight=height(arr,root+1)+1;
	rheight=height(arr,root+lheight+1)+1;
	return max(lheight,rheight);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char st[10005];
        char ss[]="\n";
        gets(st);
        //puts(st);
        int l=strlen(st);
        //cout<<l<<"\n";
      //if(!strcmp(gets(st),ss))cout<<0<<"\n";
      //cout<<"sa1\n";
     // else
      //{//struct binar_tree *root=make_tree(st,0);

        cout<<height(st,0)<<"\n";

      //}
        }
    return 0;
}
