    // link:
    // [prajwal1721]
    // g++ -Wall -Wextra -Wshadow filename.cpp
    /*comments:
    */
    
    
    
    #include<bits/stdc++.h>
    using namespace std; 
    #define mod 1000000007
    #define gcd(a,b) __gcd(a,b)
    #define lcm(a,b) (a*b)/gcd(a,b)
    #define bits(x) __builtin_popcountll(x)
    
    
    typedef long long int ll;
    void solve()
    {
       ll f=0,n,m,t1,t2;cin>>n>>m;
       vector<pair<ll,ll>> v;
       for(int i=0;i<n;i++)
       {
           cin>>t1>>t2;
           if(f>=t1)f=max(f,t2);
        // cout<<f<< ' ';
       } 
       if(f>=m)
       cout<<"YES\n";
       else
       cout<<"NO\n";
    
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