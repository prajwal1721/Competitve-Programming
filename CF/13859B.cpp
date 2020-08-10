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
ll ans[6][300005]={0};
void solve()
{
    ll n,t,m,k,z;cin>>n>>k>>z;
    vector<ll> v,arr;
    v.push_back(0);
    for(int i=0;i<n;i++){
        cin>>t;v.push_back(t+v[i]);
        arr.push_back(t);
        ans[0][i+1]=ans[0][i]+t;
    }
    for(int i=1;i<n;i++){

    }
    k++;
    ll mx=0,g_mx=arr[0];
    for(int j=1;j<=z;j++){
        for(int i=1;i<=k;i++){
            ans[j][i]=ans[j-1][i];
            if(i-2>0)
                ans[j][i]=max(ans[j][i]+arr[i-1]+max(v[k-j]-v[i],0LL)+arr[i],ans[j][i]);
        }
        mx=0;
        ans[j][1]=arr[0];
        for(int i=2;i<=k;i++){
            mx=max(ans[i][j],mx);
            ans[j][i]=max(ans[j][i],mx);
        }
    }
    for(int j=0;j<=z;j++){
        for(int i=0;i<=k;i++)cout<<ans[j][i]<<" ";cout<<'\n';
    }
    cout<<ans[z][k]<<'\n';

    
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