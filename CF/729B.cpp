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
    ll n,t,m;cin>>n>>m;
    ll a[n][m];
    ll col[n+1][m+1]={0},row[n+1][m+1]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){cin>>a[i][j];}
    }
    for(int i=0;i<=m;i++)col[0][i]=row[0][i]=0;
    for(int i=0;i<=n;i++)col[i][0]=row[i][0]=0;
    for(int j=1;j<=m;j++)
    {
        for(int i=1;i<=n;i++)
        {
            col[i][j]=col[i-1][j];
            if(a[i-1][j-1]==1)col[i][j]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            row[i][j]=row[i][j-1];
            if(a[i-1][j-1]==1)row[i][j]++;
        }
    }
    /*
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
            cout<<col[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
            cout<<row[i][j]<<" ";
        cout<<"\n";
    }
    */
    ll ans=0;
    // cout<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                // cout<<i<<" "<<j<<" "<<ans<<":";
                if(col[i+1][j+1])ans++;
                if(row[i+1][j+1])ans++;
                if(row[i+1][m]>row[1+i][1+j])ans++;
                if(col[n][j+1]>col[1+i][j+1])ans++;
                // cout<<ans<<"\n";
            }
        }
    }
    cout<<ans<<"\n";
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