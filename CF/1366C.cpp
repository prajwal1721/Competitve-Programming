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
ll a[31][31]={0};
void solve()
{
    ll n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    ll cnt=0;
    vector<pair<ll,ll>> q1,q2;q1.push_back({0,0});q2.push_back({n-1,m-1});
    vector<pair<ll,ll>> t1,t2;
    ll visit[31][31]={0};
    ll x=(n+m-1)/2;
    for(int i=0;i<x;i++)
    {     
        ll c=0,z=0;
        for(auto s1:q1)
        {
            // cout<<s1.first<<"-"<<s1.second<<"::";
            if(visit[s1.first][s1.second])continue;
            visit[s1.first][s1.second]=1;
            if(a[s1.first][s1.second])c++;
            else z++;

            if(s1.first+1<n && !visit[s1.first+1][s1.second])t1.push_back({s1.first+1,s1.second});
            if(s1.second+1<m && !visit[s1.first][s1.second+1])t1.push_back({s1.first,s1.second+1});
        }
        // cout<<"\n";
        for(auto s1:q2)
        {
            if(visit[s1.first][s1.second])continue;
            // cout<<s1.first<<"-"<<s1.second<<"::";
            visit[s1.first][s1.second]=1;
            if(a[s1.first][s1.second])c++;
            else z++;
            if(s1.first-1>=0 && !visit[s1.first-1][s1.second])t2.push_back({s1.first-1,s1.second});
            if(s1.second-1>=0 && !visit[s1.first][s1.second-1])t2.push_back({s1.first,s1.second-1});
        }
        // cout<<"\n";

    //    cout<<c<<" "<<z<<"\n";
        cnt+=min(c,z);
        q1.clear();q2.clear();
        for(auto s:t1)q1.push_back(s);
        for(auto s:t2)q2.push_back(s);
    }
    cout<<cnt<<"\n";
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