// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
class Node
{
    public :
        ll data;
        Node* left;
        Node* right;
    Node(ll data)
    {
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};


void preorder_recursive(Node* head)
{
    if(!head)return;
    cout<<head->data<<" ";
    preorder_recursive(head->left);
    preorder_recursive(head->right);
}
void postorder_recursive(Node* head)
{
    if(!head)return;
    postorder_recursive(head->left);
    postorder_recursive(head->right);
    cout<<head->data<<" ";
}
void inorder_recursive(Node* head)
{
    if(!head)return;
    inorder_recursive(head->left);
    cout<<head->data<<" ";
    inorder_recursive(head->right);
}

void level_iterative(Node*head)
{
    queue<Node*> q;
    q.push(head);
    while(!q.empty())
    {
        Node*t=q.front();q.pop();
        if(!t)continue;
        cout<<t->data<<" ";
        q.push(t->left);
        q.push(t->right);
    }
}
 

void inorder_iterative(Node*head)
{
    stack<Node*>st;
    Node *cur=head;
    while(!st.empty() || cur!=NULL)
    {
        if(cur!=NULL)
        {
            st.push(cur);
            cur=cur->left;
        }
        else
        {
            cur=st.top();st.pop();
            if(cur!=NULL)
            {
                cout<<cur->data<<" ";
                cur=cur->right;
            }
        }
    }    
}

void preorder_iterative(Node*head)
{
    stack<Node*>st;
    Node *cur=head;
    while(!st.empty() || cur!=NULL)
    {
        if(cur!=NULL)
        {
            cout<<cur->data<<" ";
            st.push(cur);
            cur=cur->left;
        }
        else
        {
            cur=st.top();st.pop();
            cur=cur->right;
        }
    }    
}

void postorder_iterative(Node*root)
{
    stack<Node*> s1,s2;
    s1.push(root);
    while(!s1.empty())
    {
        s2.push(s1.top());s1.top();
        Node *t=s2.top();
        if(t->left)
        s1.push(t->left);
        if(t->right)
        s1.push(t->right);
    }
    while(!s2.empty())cout<<s2.top()<<" ",s2.pop();
}