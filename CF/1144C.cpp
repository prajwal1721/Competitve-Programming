// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll t=1,n,m=0;cin>>n;
        vector<ll> v;
        map<ll,ll> mp;
        ll flag=1;
        while (n--)
        {
            cin>>t;v.push_back(t);
            if(mp[t]>0)mp[t]+=1;
            else mp[t]=1;
            if(mp[t]>2)flag=0;
        }
        if(flag)
        {vector<ll> ulta;
        set<ll> s(v.begin(),v.end());
        cout<<"YES\n";
        cout<<s.size()<<"\n";
        for(auto i=s.begin();i!=s.end();i++)
        {
            cout<<*i<<" ";
            if(mp[*i]>1)
            while(mp[*i]!=1)
            {
                ulta.push_back(*i);
                mp[*i]--;
            }
        }
        cout<<"\n"<<ulta.size()<<"\n";
        for(auto i=ulta.rbegin();i!=ulta.rend();i++)
        {
            cout<<*i<<" ";
        }
        cout<<"\n";
        }
        else cout<<"NO\n";
}