// link:https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/marriage-problem/description/
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:last test case not working check that TLE
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
ll parent[20000005]={0};
ll size[20000005]={0};
void make(ll n,ll m)
{
    for(int i=1;i<=n;i++)
        {parent[i]=i;size[i]=0;}
    for(int i=n+1;i<=n+m;i++)
        {parent[i]=i;size[i]=1;}
}
ll find(ll n)
{
    if(parent[n]==n)return n;
    return find(parent[parent[n]]);
}
void uni(int a,int b)
{
    a=find(a);
    b=find(b);
    if(size[a]<size[b])
        {ll t=a;a=b;b=t;}
    parent[b]=a;
    size[a]+=size[b];
}
void solve()
{
    ll m,n;cin>>n>>m;
    make(n,m);
    for(int i=0;i<3;i++)
    {
        ll a,b,t;cin>>t;
        while (t-->0)
        {   
            cin>>a>>b;
            if(i==0)
            uni(a,b);
            else if (i==1)
                uni(a+n,b+n);
            else 
                uni(a,b+n);
        }
    }
    ll ans=0;
    // for(int i=1;i<=n+m;i++)cout<<size[i]<<" ";cout<<"\n";

    for(int i=1;i<=n;i++)
    {
        ll p=find(i);
        ans+=max(0LL,m-size[p]);
        // cout<<i<<" "<<ans<<"\n"; 
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