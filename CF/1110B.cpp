// link:
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
    ll k,n,t,t1,m;cin>>n>>m>>k;
    vector<ll> v;
    t=0;
    cin>>t;
    // if(n==1){cout<<"1\n";return ;}
    for(int i=1;i<n;i++){
        cin>>t1;
        v.push_back(t1-t-1);t=t1;
    }
    // v.push_back(m-t);
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<'\n';
    ll ans=0;
    for(int i=0;i<v.size()-k+1;i++)ans+=v[i];
    cout<<ans+n<<'\n';

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