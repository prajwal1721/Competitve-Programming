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
ll prime(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1; 
}
void solve()
{
    ll n;cin>>n;
    ll no_edge=n;
    while(!prime(no_edge))no_edge++;
    cout<<no_edge<<"\n";
    for(int i=1;i<n;i++)
        cout<<i<<" "<<(i+1)<<"\n";
    cout<<n<<" "<<1<<"\n";
    ll visit[n+5]={0},cnt=0;
    for(int i=1;cnt<no_edge-n && i<=n;i++)
    {
        if(!visit[i]&&!visit[i+2])
        {cout<<i<<" "<<i+2<<"\n";visit[i]=visit[i+2]=1;cnt++;}

    }    

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