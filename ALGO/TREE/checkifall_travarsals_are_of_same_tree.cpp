#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
int preind=0;
Node* check(int n,vector<int> in,vector<int> pre,int st,int ed)
{
    if(st>ed)return  NULL;
    Node*t=new Node(pre[preind++]);
    if(st==ed)return t;
    int index;
    for(int i=0;i<n;i++)if(t->data==in[i]){index=i;break;}
    t->left=check(n,in,pre,st,index-1);
    t->right=check(n,in,pre,index+1,ed);
}
int main()
{

}