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
    string s;cin>>s;
    ll cnt_a=0,n=2+s.length(),a=0,b=0;
    ll dp[n+2]={0};
    s='a'+s+'a';
    for(int i=0;i<n;i++)
       {
        dp[i+1]=dp[i];
        if(s[i]=='a'){cnt_a++;dp[i+1]++;}
        // cout<<dp[i]<<" ";
       }
    ll ans=n;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='b')b++;
        a=(i+1-b);
        ll t_b=0;
        for(int j=i+1;j<n;j++)
        {
            if(s[j]=='b')t_b++;
            if(t_b==0)continue;
            ans=min(ans,b+(dp[j+1]-a)+(n-j-1)-(dp[n]-dp[j+1]));
        }
    }
    if(cnt_a==n)ans=0;
    // cout<<ans<<" ";
    cout<<max(n-2-ans,0LL)<<"\n";

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