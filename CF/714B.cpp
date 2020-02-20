#include<iostream>
#include<set>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    set<ll> s;
    ll n,t;cin>>n;
    while (n--)
    {
        cin>>t;s.insert(t);
    }
    n=s.size();
    if(n<=2)cout<<"YES\n";
    else if(n==3)
    {
        ll a[3],y=0;
        for(auto i=s.begin();i!=s.end();i++)
            a[y++]=*i;
        if(a[1]-a[0]==a[2]-a[1])cout<<"YES\n";
        else cout<<"NO\n";
    }   
    else 
        cout<<"NO\n"; 
}