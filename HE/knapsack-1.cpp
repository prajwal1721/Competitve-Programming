    // link:
    // [prajwal1721]
    // g++ -Wall -Wextra -Wshadow filename.cpp
    // ./a.out >input <output
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
    ll n,k,t;cin>>n>>k;
    set <ll> v;for(int i=0;i<n;i++){cin>>t;v.insert(t);}
    ll dp[3000]={0};
    vector<ll> s(v.begin(),v.end());
    for(int i=1;i<=3000;i++)
            dp[i]=0;
    dp[0]=1;
    for(int i=1;i<=k+5;i++)
    {
        for(auto  j:s)
        {
            if(i-j>=0 && dp[i-j])dp[i]=1;
        }
    }
    ll ans=0;
        for(int i=k;i>=1;i--)
        {
            // cout<<dp[i]<<"  ";
            if(dp[i]>0){ans=i;break;}
        }
        cout<<ans<<"\n";
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