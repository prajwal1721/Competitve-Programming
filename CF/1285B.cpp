#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        vector<ll> v;
        ll n,t;
        cin>>n;
        ll p=0,pos=0;
        while(n--)
        {
            cin>>t;
            p+=t;
            if(t>0) pos++;
            v.push_back(t);
        }
        if(pos==v.size())
        {
            cout<<"YES\n";
            continue;
        }
        else if(pos==0)
        {
            cout<<"NO\n";
            continue;
        }
        ll f=1;
        for(auto it=v.begin();it!=v.end();it++)
        {
            ll tp=0,count=0;
                auto i=it;
        for(;i!=v.end();i++)
                {
                    tp+=*i;
                    count ++;
                    if(tp>=p && count !=v.size())
                        {
                            f=0;
                            goto l;
                        }
                }
        }
        l:
        if(f==1) cout<<"YES\n";
        else cout<<"NO\n";
    }

}