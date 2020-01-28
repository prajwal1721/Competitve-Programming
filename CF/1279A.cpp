#include<iostream>
#include<vector>
#include<algorithm>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
typedef long long ll;
int main()
{
    ll q,t;
    cin>>q;
    while(q--)
    {
        ll r,g,b;
        ll p=3,t;

            cin>>r>>g>>b;
        if(r>b && r>g ) 
        {
            if(b>g)
            {
                SWAP(b,g,t);
            }
        }
        else if(g>b && g>r)
        {
            SWAP(r,g,t);
            if(b>g)
                SWAP(b,g,t);
        }
        else
        {
            SWAP(r,b,t);
            if(b>g)
                SWAP(b,g,t);
        }
        if(r<=b+g+1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
