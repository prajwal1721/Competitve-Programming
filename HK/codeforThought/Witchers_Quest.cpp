
#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;  
 
ll solve() 
{ 
    ll n,l,c;cin>>n;
    vector<ll>v,cost;
    for(ll i=0;i<n;i++){cin>>l>>c;
        v.push_back(l);
        cost.push_back(c);
        }
    ll dp[n][3];
    dp[0][0] = 0; 
    dp[0][1] = cost[0]; 
    dp[0][2] = cost[0] * 2; 
    for (ll i = 1; i < n; i++) { 
        for (ll j = 0; j < 3; j++) { 
            ll minn = INT32_MAX;  
            if (j + v[i] != v[i - 1]) 
                minn = min(minn,dp[i - 1][0]); 
            if (j + v[i] != v[i - 1] + 1) 
                minn = min(minn, dp[i - 1][1]); 
            if (j + v[i] != v[i - 1] + 2) 
                minn = min(minn,dp[i - 1][2]); 
            dp[i][j] = j * cost[i] + minn; 
        } 
    } 
    ll ans = INT64_MAX; 
    for (ll i = 0; i < 3; i++) 
        ans = min(ans, dp[n - 1][i]); 
    cout<<ans<<"\n" ;   
    return 0; 
} 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;
    for(ll i=0;i<n;i++){solve();}
    return 0;
}