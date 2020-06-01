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
    ll n,t,k;cin>>n>>k;
    vector<ll >v ;
    ll odd=0 ,eve=0;
    ll f=0;
    for(int i=0;i<n;i++){cin>>t;if(t%2)odd++;
    else eve++;
    }
    if(odd==0 ){cout<<"No\n";return ;}
    k--;odd--;
    ll x=k;
    if(x>eve)
    {

            x=x-eve;
        if(eve%2==0 && eve!=0)x++;
    }
    else x=0;
    if(x%2==0 && odd>=x )f=1;


    if(k>eve)
        {
                k=k-eve;
            if(eve%2==1)k++;
        }
    else k=0;
    if(k%2==0 && odd>=k )f=1;
    if(f)cout<<"Yes\n";
    else cout<<"No\n";

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