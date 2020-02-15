#include<iostream>
#include<string>
#include<queue>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while(q--)
    {
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        queue<ll> q;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='0')q.push(i);
        }
        char t;
        for(ll i=0;i<s.length();i++)
        {
            // cout<<s[i]<<" ";
            // cout<<":"<<s<<"::"<<k<<"::"<<q.front()<<":"<<i<<"\n";
            if(s[i]=='1' && !q.empty() && q.front()>i && k>=(q.front()-i))
            {
                SWAP(s[i],s[q.front()],t);
                k-=(q.front()-i);
                q.pop();
            }
            else if(!q.empty() && q.front()<=i)
                q.pop();
        }
        cout<<s<<"\n";
    }
}