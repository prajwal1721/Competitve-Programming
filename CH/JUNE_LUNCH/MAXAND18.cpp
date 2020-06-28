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
        vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back((ll)t);}
        vector<pair<ll,ll>> ans;
        for(int i=0;i<=31;i++)
        { 
            ll t=0;
            for(int j=0;j<n;j++)t+=((((1<<i)&v[j])==(1<<i))?1:0);
            ans.push_back({t,(i)});
        }
        sort(ans.begin(),ans.end(),[](pair<ll,ll>p1,pair<ll,ll>p2)->bool{
                if(p1.first*(1<<p1.second)==p2.first*(1<<p2.second))
                    return p1.second<p2.second;
            return (p1.first*(1<<p1.second)>p2.first*(1<<p2.second));
        });
        int i,anss=0;
        for( i=0;i<k;i++)
        {
            if(ans[i].first==0)break;
            anss|=(1<<ans[i].second);
            // cout<<anss<<" ";
        }
        int j=0;
        // cout<<i<<" ";
        while(i<k && j<=31)
        {
            if(((1<<j)& anss) ==0){anss|=(1<<j);i++;}
            j++;
        }

        cout<<(int)anss<<"\n";
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