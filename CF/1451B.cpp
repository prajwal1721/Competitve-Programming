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
    ll n,st,ed,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int f=0;
    for(int i=0;i<m;i++){
        cin>>st>>ed;
        f=0;st--;ed--;
        for(int i=0;i<st;i++){
            if(s[i]==s[st]){f=1;break;}
        }
        for(int i=ed+1;i<n && !f;i++){
            if(s[i]==s[ed]){f=1;break;}
        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";

    }

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