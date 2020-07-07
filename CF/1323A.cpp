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
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    if(n==1 && v[0]%2){cout<<"-1\n";return ;}
    t=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0){cout<<"1\n"<<i+1<<"\n";return;}
        else if(v[i]%2 && t==-1)t=i;
        else {cout<<"2\n"<<t+1<<" "<<i+1<<"\n";return ;}
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