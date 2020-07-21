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
    ll n,t,m;cin>>n;
    string a,b;cin>>a>>b;
    vector<ll>ans;
    ll f=0;
    for(int i=n-1;i>0;i--)
    {
        if(a[i]!=b[i]){
            if(a[0]!=b[i])
            ans.push_back(i+1);
            ans.push_back(1);
            ans.push_back(i+1);
        }
    }
    if(a[0]!=b[0])ans.push_back(1);
    cout<<ans.size()<<" ";
    for(auto i:ans)cout<<i<<" ";cout<<'\n';


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