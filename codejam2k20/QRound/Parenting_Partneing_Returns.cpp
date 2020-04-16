// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow Parenting_Partnering_Returns.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;



void solve()
{
    ll n,cn,ii=0;cin>>n;cn=n;
    ll cur_J=0,cur_C=0,f=0;
    string ans[n];
    vector<tuple<ll,ll,ll>>v;
    while (n--)
    {
        ll st,ed;cin>>st>>ed;
        v.push_back({st,ed,ii});ii++;
    }
    sort(v.begin(),v.end());
    n=cn;
    
    for(ll i=0;i<n;i++)
    {
        ll st,ed,ind;
        tie(st,ed,ind)=v[i];
        if(st>=cur_C){ans[ind]='C';cur_C=ed;}
        else if(st>=cur_J){ans[ind]='J';cur_J=ed;}
        else {f=1;}
    }
    if(f)cout<<"IMPOSSIBLE";
    else 
    {    for(ll i=0;i<n;i++ )
            cout<<ans[i];    
    }

}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t,i=1;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(i<=t)
        {
            cout<<"Case #"<<i<<": ";
            solve();
            i++;
            cout<<"\n";
        }


    return 0;
}