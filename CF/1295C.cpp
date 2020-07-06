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
int dp[27][100005]={0};
void solve()
{
    string s,t;cin>>s>>t;
    // cout<<s<<"\n";
    ll check[26]={0};
    ll n=s.length();
    for(int i=0;i<n;i++)check[s[i]-'a']=1;
    for(int j=0;j<t.length();j++)if(!check[t[j]-'a']){cout<<"-1\n";return;}
    for(int i=0;i<27;i++)
        for(int j=0;j<=n+2;j++)dp[i][j]=0;
    for(int i=1;i<=n;i++)
    {
        dp[s[i-1]-'a'][i]=1;
    }
    for(int i=0;i<26;i++)
    {
        for(int j=n;j>=1;j--)
            {
                if(i==n && dp[i][j]==1)dp[i][j]=j;
                else if(dp[i][j]==1)dp[i][j]=j;
                else if(i!=n)dp[i][j]=dp[i][j+1];
            }
    }
    ll cnt=0;
    for(int i=0;i<t.length();)
    {
        ll j=1,k=1;
        while(i<t.length() && k<=n &&  dp[t[i]-'a'][k]!=0){k=dp[t[i]-'a'][k]+1;i++;}
        cnt++;
    }
    cout<<cnt<<"\n";
    // cout<<min(n,cnt)<<"\n";
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