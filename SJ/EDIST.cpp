// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;

ll a[2001][2001]={0};
void solve()
{
    string s1,s2;cin>>s1>>s2;
    ll n=s1.length(),m=s2.length();
    a[0][0]=0;
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=m;j++)
        {
            if(min(i,j)==0LL)a[i][j]=max(i,j);
            else
            {a[i][j]=min(a[i-1][j]+1,a[i][j-1]+1);
            a[i][j]=min(a[i][j],a[i-1][j-1]+((s1[i-1]==s2[j-1])?0:1));
            }
        }
    }

    cout<<a[n][m]<<"\n";
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