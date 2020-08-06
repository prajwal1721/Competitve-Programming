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
    vector<ll> v;
    ll pos[102];
    v.push_back(0);
    for(int i=1;i<=n;i++){cin>>t;v.push_back(t);pos[t]=i;}
    ll visit[102]={0};
    for(int i=1;i<=n;i++){
        ll cur=pos[i];
        if(cur!=i){
            while(cur>0 && cur!=i && !visit[cur] && v[cur-1]>v[cur]){
                pos[v[cur-1]]=cur;
                pos[v[cur]]=cur-1;
                swap(v[cur-1],v[cur]);
                visit[cur]=1;;
                cur--;
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<v[i]<<" ";cout<<'\n';


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