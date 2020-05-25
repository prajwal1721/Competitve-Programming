    // link:https://www.hackerrank.com/contests/june-world-codesprint/challenges/johnland/problem
    // [prajwal1721]
    // g++ -Wall -Wextra -Wshadow filename.cpp
    // ./a.out >input <output
    /*comments: goo sum not done
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

    #define MX 200004

    typedef long long int ll;
    vector<pair<ll,ll>>adj[MX];
    ll par[MX]={0},sz[MX]={0},visit[MX]={0};
    ll ans=0,n,p;
    void dfs(ll a)
    {
        visit[a]=1;
        for(auto i:adj[a])
        {
            if(!visit[i.second] && p>0)
            {
                ans+=(1<<i.first)*p;
                ;dfs(i.second);
            }
        }
    }
    ll find(ll a)
    {
        if(a==par[a])return a;
        return par[a]=find(par[a]);
    }
    void uni(ll a,ll b)
    {
        a=find(a);
        b=find(b);
        if(sz[a]<sz[b]){ll t=a;a=b;b=t;}
        par[b]=a;
        sz[a]+=sz[b];
    }
    void solve()
    {
        ll w,a,b,m;cin>>n>>m;
        vector<tuple<ll,ll,ll>> v;
        for(int i=0;i<m;i++){cin>>a>>b>>w;v.push_back({w,a,b});}
        sort(v.begin(),v.end());
        for(int i=1;i<=n+2;i++){sz[i]=1;par[i]=i;}
        for(int i=0;i<m;i++)
        {
            tie(w,a,b)=v[i];
            if(find(a)!=find(b))
            {
                uni(a,b);
                ans+=(n-1)*(1<<w);
                adj[a].push_back({w,b});
                adj[b].push_back({w,a});
                // cout<<a<<" "<<b<<" "<<w<<" "<<ans<<"\n";
            }
        }
        ll st;
        p=n-1;
        for(int i=1;i<=n;i++)
        {
            if(adj[i].size()==1){st=i;break;}
        }
        // dfs(st);
        string s="";
        ll no=ceil(log2(ans));
        cout<<ans<<"\n";

        for(ll  i=no;i>=0;i--)
        {
            if((1&(1<<i))==1<<i)s+='1';
            else s+='0';
        }
        cout<<s<<"\n";
    }


    int main()
    { 
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        // ll t;cin>>t;
        // cout<<t<<"Hi test complete\n";
        // while(t--)
            {
                solve();
            }


        return 0;
    }