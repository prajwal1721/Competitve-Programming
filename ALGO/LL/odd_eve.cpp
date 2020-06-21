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
    int data;
    Node* next;
};
Node* add(int data,Node* head)
{
    Node *t=new Node();
    t->data=data;
    t->next=NULL;
    if(!head){head=t;return head;}
    Node* t1=head;
    while(t1->next)t1=t1->next;
    t1->next=t;
    return head;
}
void print(Node * t)
{
    while(t)cout<<t->data<<" ",t=t->next;
    cout<<"\n";
}
Node* oddeve(Node*head)
{
    Node *t=head;
    while(t)
    {if(t->data%2==0)break;
    t=t->next;}
    if(t==NULL)return head;
    Node*r=head,*h=head,*ed=head;
    while(t->next){t=t->next;if(t->data%2)ed=t;}
    while(h->data%2)
    {
        if(head->next)head=head->next;
        t->next=h;
        t=t->next;
        h->next=NULL;
        h=head;
    }
    r=h;
    if(h)
    while(r!=ed)
    {
        if(r->data%2)
        {
            h->next=r->next;
            t->next=r;
            r->next=NULL;
            t=t->next;
            r=h->next;
        }
        else 
        {
            h=r;
            r=r->next;
        }
    }
    // print(head);
    return head;
}
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,t;cin>>n;
        Node* head=NULL;
    for(int i=0;i<n;i++)
        {
            cin>>t;
            head=add(t,head);
        }
    head=oddeve(head);
    print(head);
    return 0;
}