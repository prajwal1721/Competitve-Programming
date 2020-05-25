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


const int mx=51;
typedef long long int ll;
int matrix[51][51];
int row[51],col[51];
void solve()
{
    ll n;cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        for(int j=0;j<n;j++)
            matrix[i][j]=s[j]-'0';
    }
        // cout<<"done\n";

    ll f=0;
    
    for(int i=n-1;i>=0;i--)
    {
        row[i]=n;col[i]=n;
    }
    
    for(int i=n-2;i>=0 && !f;i--)
    {
        for(int j=n-2;j>=0;j--)
        {
            // cout<<i<<" "<<j<<"\n";
            if(matrix[i][j]==1 && (matrix[i][j+1]==1 || matrix[i+1][j]==1))continue;
            else if(matrix[i][j]==1){f=1;break;}
        }
    }
    if(f)cout<<"NO\n";
    else cout<<"YES\n";

}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}