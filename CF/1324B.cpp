#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
    ll q;cin>>q;
    while (q--)
    {
        ll t,mx=0,n,f=0;cin>>n;
        int a[5005]={0};
        int pre;cin>>pre;a[pre]++;
        for(int i=1;i<n;i++)
        {
            cin>>t;a[t]++;
            if( a[t]==2&& pre!=t && !f || a[t]>2 && !f){f=1;cout<<"YES\n";}
            pre=t;
        }       
        if(!f)cout<<"NO\n";
    }
}
    