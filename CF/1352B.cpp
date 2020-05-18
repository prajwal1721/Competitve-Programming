// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
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
    ll n,k;cin>>n>>k;
    // if(n%2==1 && k%2==0 || n%2==0 && floor((float)n/k)<1 ){cout<<"NO\n";return;}
    vector<ll>v1,v2;
    if((n-k+1)%2==1 && n-k+1>=0)
    {
        for(int i=1;i<k;i++)
        {
            v1.push_back(1);
        }
        v1.push_back(n-k+1);
    }
    else if((n-(k-1)*2)%2==0 && (n-(k-1)*2)!=0  && n-2*(k-1)>=0)
    {
        for(int i=1;i<k;i++)
        {
            v1.push_back(2);
        }
        v1.push_back(n-2*(k-1));
    }
    else {cout<<"NO\n";return ;}
    cout<<"YES\n";
    for(int i=0;i<k;i++)
        cout<<v1[i]<<" ";
    cout<<"\n";
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