#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    vector<ll> v;
    ll q,n,t;cin>>q;n=q;
    ll cn=n;
    while (q--)
    {
        cin>>t;v.push_back(t);
    }
    sort(v.begin(),v.end());
        ll ans[cn];
    ll st=ceil((float)cn/2)-1;
    ll fwd=st,bwd=st;
    ll i=0;
    n=cn;
    for(i=0;i<cn;)
    {
        if(i<cn)
            ans[bwd--]=v[i++];
        if(i<cn)
            ans[++fwd]=v[i++];
    }

    if(ans[n-1]>=ans[n-2]+ans[0] || ans[0]>=ans[1]+ans[n-1])cout<<"NO\n";
    else 
        {
            cout<<"YES\n";
             for(i=0;i<cn;i++)cout<<ans[i]<<" ";
            cout<<"\n";
        }
}

    