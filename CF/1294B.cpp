#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll n;cin>>n;ll a,b;
        vector<pair<ll,ll>> v;
        while(n--)
        {
            cin>>a>>b;v.push_back(pair<ll,ll>(a,b));
        }
        sort(v.begin(),v.end());
        ll x=0,y=0,f=1;
        string s;
        for(auto p=v.begin();p!=v.end();p++)
        {
            // cout<<p->first<<"::"<<p->second<<"\n";
            if(p->first<x || p->second<y){f=0;break;}
            while(x!=p->first || y!=p->second)
            {
                if(x!=p->first ) {s+='R';x++;}
                else if(y!=p->second){s+='U';y++;}
            }
        }
        if(f)cout<<"YES\n"<<s<<"\n";
        else cout<<"NO\n";
    }
}