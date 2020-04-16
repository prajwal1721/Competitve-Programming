// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
ll a[200001]={0};
void solve()
{
    ll mx=0,n,t;cin>>n;
    set<ll> s;
    for(ll i=0;i<200002;i++)a[i]=0;
    for(ll i=0;i<n;i++)
    {
        cin>>t;a[t]++;
        s.insert(t);
        if(a[mx]<a[t])mx=t;
    }    
    ll unique=s.size()-1;
    if(a[mx]>unique){unique+=1;a[mx]--;}
    // cout<<a[mx]<<" "<<unique<<"\n";
    cout<<min(a[mx],unique)<<'\n';
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