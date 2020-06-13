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
    ll n,t;cin>>n;
    ll visit[100000]={0};
    ll cur=0;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);visit[t]=1;}
    vector<ll> ans;
    for(int i=0;i<n;i++)
    {
        // cout<<visit[cur]<<" "<<cur<<"\n";
        if(i+1<v[i]){cout<<"-1\n";return;}
        if(visit[cur]==0){
            visit[cur]=1;
            ans.push_back(cur++);
            while(i+1<n && v[i+1]==v[i]){while(visit[cur]==1)cur++;ans.push_back(cur);visit[cur++]=1;i++;}
            visit[v[i]]=0;
            cur=v[i];
        }
        else
        {
            while(visit[cur]==1)cur++;
            visit[cur]=1;
            ans.push_back(cur++);
            while(i+1<n && v[i+1]==v[i]){while(visit[cur]==1)cur++;ans.push_back(cur);visit[cur++]=1;i++;}
            visit[v[i]]=0;
            cur=v[i];
            // cout<<cur<<"::";
        }
    }
    for(auto i:ans)cout<<i<<" ";
    cout<<"\n";
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