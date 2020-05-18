// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: good sum
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
    ll t,n,m;cin>>n;
    vector<ll>a,b;for(int i=0;i<n;i++){cin>>t;a.push_back(t);}sort(a.begin(),a.end(),greater<ll>());
    cin>>m;
    for(int i=0;i<m;i++){cin>>t;b.push_back(t);}sort(b.begin(),b.end(),greater<ll> ());
    ll p_a=2*n,p_b=2*m,i=0,j=0,x=2*n,y=2*m;
    for(;i<n;i++)
    {
        p_a++;
        for(;j<m&& b[j]>=a[i];j++)p_b++;
        if(p_a-p_b>=x-y)x=p_a,y=p_b;
    }
    cout<<x<<":"<<y<<"\n";
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