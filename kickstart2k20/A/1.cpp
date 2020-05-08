#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int cur=1,t;cin>>t;
    while(t--)
    {
        vector<ll> v;
        ll cash,n,q;cin>>n>>cash;
        while(n--)
        {
            cin>>q;v.push_back(q);
        }
        ll sum=0,ans=0;
        sort(v.begin(),v.end());
        for(auto i=v.begin();i!=v.end();i++)
        {
            if(sum+*i>cash)break;
            sum+=*i;ans++;
        }
        cout<<"Case #"<<cur<<": "<<ans<<"\n";cur++;
    }
}