#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll n, m;
        cin >> n >> m;
        ll ans = 1;
        ll st=1,ed=2e9;
        if(n<=m)cout<<n<<"\n";
        else
        {while (st<ed)
        {       
                ll mid=(st+ed)/2;
                // cout<<mid<<" ";
                if(((mid+1)*mid)/2>=n-m)
                {
                                ed=mid;
                }
                else 
                {
                        st=mid+1;
                }
        cout<<st+m<<"\n";        
        }
        }
}