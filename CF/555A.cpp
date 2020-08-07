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
ll arr[100005]={0};
void solve()
{
    ll ans=0,f=1,red=0,n,t,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        ll k,t1;
        cin>>k;
        ans+=k-1;
        for(int j=0;j<k;j++){
            cin>>t1;
            arr[t1]=i+1;
        }
    }
    f=arr[1];
    for(int i=2;i<=n;i++){
        if(f==arr[i])red+=2;
        else break;
    }
    cout<<ans+n-1-red<<'\n';


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