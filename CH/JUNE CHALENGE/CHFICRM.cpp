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
    ll n,i=0,t,f=0,te=0;cin>>n;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    if(v[0]!=5){cout<<"NO\n";return;}
    else f++;
    for(i=1;i<n;i++)
    {
        if(v[i]==5)f++;
        else if(v[i]==10 && f){f--;te++;}
        else if(v[i]==15 && (te>=1) ){te--;}
        else if(v[i]==15 && (f>=2)){f-=2;}
        else {cout<<"NO\n";return;}
    }    
    cout<<"YES\n";

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