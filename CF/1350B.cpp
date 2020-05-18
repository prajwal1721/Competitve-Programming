    // link:
    // [prajwal1721]
    // g++ -Wall -Wextra -Wshadow filename.cpp
    /*comments:
    */
    
    
    
    #include<bits/stdc++.h>
    using namespace std; 
    #define mod 1000000007
    #define gcd(a,b) __gcd(a,b)
    #define lcm(a,b) (a*(b/gcd(a,b))
    #define bits(x) __builtin_popcountll(x)
    #define vi              vector<int>
    #define vl              vector<ll>
    #define all(v)          v.begin(),v.end()
    #define UNIQUE(X)       (X).erase(unique(all(X)),(X).end()) 
    
    typedef long long int ll;

    void solve()
    {
        ll t,n;cin>>n;vector<ll> v;v.push_back(0);
        for(ll i=0;i<n;i++){cin>>t;v.push_back(t);}
        ll dp[n+1]={0},mx=1;
        dp[0]=1;
        memset(dp,1,n+1);
        for(ll i=n;i>=1;i--)
        {
            dp[i]=1;
            for(ll j=2;j*i<=n;j++)
            {
                if(v[j*i]>v[i])
                {
                    dp[i]=max(dp[i],dp[j*i]+1);
                }
            }            
        }
        for(ll i=1;i<=n;i++)
            {
                mx=max(mx,dp[i]);
            }        
        cout<<mx<<"\n";
    }
    
    
    int main()
    { 
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll t;cin>>t;
        // cout<<t<<"Hi test complete\n";
        while(t--)
            {
                solve();
            }
    
    
        return 0;
    }