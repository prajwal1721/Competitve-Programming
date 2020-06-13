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
    ll n,x,t;cin>>n>>x;
    vector<ll>v;
    ll ss=0,p=0;
    for(int i=0;i<n;i++){cin>>t;if(t%x!=0)p++;ss+=t;v.push_back(t);}
    if(p==0){cout<<"-1\n";return ;}
    ll s=0,e=n-1;
    // while(s%x==0)
    if(ss%x==0)
    {
        if(s<n && e>=0 && v[s]%x==0 && v[e]%x==0)
        {
            ll ts=s,te=e;
            while(ts<n && v[ts]%x==0)ts++;
            while(te>=0 && v[te]%x==0)te--;
            // cout<<ts<<" "<<te<<"\n";
            if(ts<n && te>=0 )
            {
                if(ts-t >=e-te)e=te-1;
                else s=ts+1;
            }
            else if(ts<n )s=ts;
            else if(te>=0)e=te;
            else {cout<<"-1\n";return ;}
        }
        else if(s<n && v[s]%x!=0){s++;}
        else if(e>=0 && v[e]%x!=0){e--;}
    }
    if(e-s+1>=1)cout<<e-s+1<<"\n";
    else cout<<"-1\n";
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