// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        // cin.tie(nullptr);
        // ios::sync_with_stdio(false);
        ll t,n,m;cin>>n>>m;
        ll a[n+1];a[0]=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>t;a[i]=a[i-1]+t;
        }
        // cout<<"done\n"<<m;
       while (m--)
        {
            cin>>t;
            auto it=lower_bound(a,a+n,t);
            ll ans =distance(a,it);
            /*
            ll mid;
            ll st=0,ed=n+1;
            while (st<=ed)
            {
                cout<<mid<<" ";
                mid=(st+ed)/2;
                if(a[mid]<=t)
                {
                    st=mid;
                }
                else
                {
                    ed=mid-1;
                }
            }*/
          cout<<ans<<" "<<(t-a[ans-1])<<"\n";
        }
        
        
}