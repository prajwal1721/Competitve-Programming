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
    ll n,m,c1,c2;cin>>n>>m>>c1>>c2;
    ll a[n][m]={0};
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='.')a[i][j]=1;
            else a[i][j]=0;
        }
    }
    ll d=min(2*c1,c2),d1=c1,ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)continue;
            if(j<m-1 && a[i][j]==a[i][j+1]){ans+=d;j++;}
            else if(j<m-1 && a[i][j]!=a[i][j+1])ans+=d1;
            else if(j==m-1)ans+=d1;
        }
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