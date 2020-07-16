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
vector<ll> fre(1000000000),dp(1000000000),visit(1000000000);
void solve()
{
    ll n,t,h;cin>>h>>n;
    for(int i=0;i<=h;i++)fre[i]=0;
    for(int i=0;i<n;i++)
    {
        cin>>t;fre[t]=1;
    }
    if(h<=2){cout<<"0\n";return;}
    dp[h]=0;
    for(int i=0;i<=h;i++)dp[i]=INT32_MAX;
    queue<ll> q;
    q.push(h);
    dp[h]=0;
    while(!q.empty())
    {
        t=q.front();q.pop();
        // cout<<t<<" ";
        if(visit[t])continue;
        visit[t]=1;
        if(t<=2){
            dp[0]=min(dp[1],dp[2]);   
            break;
        }
        if(!fre[t-1]){dp[t-1]=dp[t];q.push(t-1);}
        else if(fre[t-1])
        {
            if(fre[t-2]){q.push(t-2);dp[t-2]=dp[t];}
            else 
            {
                dp[t-1]=min(dp[t]+1,dp[t-1]);
                dp[t-2]=min(dp[t]+1,dp[t-2]);
                q.push(t-1);q.push(t-2);
            }
        }
    }
    // cout<<"\n";
    // for(int i=h;i>=0;i--)cout<<dp[i]<<" ";cout<<"\n";
    cout<<dp[0]<<"\n";
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