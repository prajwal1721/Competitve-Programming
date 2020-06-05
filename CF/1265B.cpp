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
    ll t,n;cin>>n;
    ll r,l;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);if(t==1)l=r=i;}
    r=r+1;l=l-1;
    ll visit[n+1]={0};
    visit[1]=visit[n]=1;
    ll cur=1,cnt=1;
    // cout<<r<<" "<<l<<"\n";
    for(;l>=0 ||  r<n;)
    {
    
            if(l>=0 && r<n && v[l]<v[r] || r>n-1)
            {
                cur=max(cur,v[l]);
                l--;
            }
            else
            {
                cur=max(v[r],cur);
                r++;
            }
            cnt++;
        if(cur==cnt)visit[cur]=1;
    }
    for(int i=1;i<=n;i++)
    {cout<<visit[i];}cout<<"\n";

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