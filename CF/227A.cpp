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
    ll n,m;cin>>n>>m;
    ll a[200]={0};
    vector<ll> v[n],s[m+1];
    ll visited[n+1]={0};
    ll ans=0; 
    for(int q=0;q<n;q++)
    {
        ll t,c;cin>>c;
        if(c==0){ans++;visited[q]=1;}
        for(int i=0;i<c;i++){cin>>t;v[q].push_back(t);s[t].push_back(q);}
    }
    queue<ll> qe;
    if(ans==n)ans++;
    for(int i=0;i<n;i++)
    {
        if(visited[i])continue;
        ans++;
        // cout<<i<<" ";
        visited[i]=1;
        qe.push(i);
        while (!qe.empty())
        {
            ll y=qe.front();qe.pop();
            // cout<<y<<"==";
            // if(visited[y])continue;
            for(auto g:v[y])
            {
                for(auto l:s[g])
                {
                    // cout<<":"<<l<<" ";
                    if(visited[l])continue;
                    qe.push(l);
                    visited[l]=1;
                }
            }
        }
        // cout<<"\n";
    }
    cout<<ans-1<<"\n";
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}