// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
typedef long long int ll;
class node
{
    private:ll data;node *rlink,*llink;
    public: node(ll data)
    {
        this->data=data;
        llink=rlink=NULL;
    }
};
int main()
{ 
    node *root=new node(1LL);
    root->llink=new node(2LL);
    return 0;
}