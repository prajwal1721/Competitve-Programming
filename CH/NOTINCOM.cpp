#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<set>
#include<vector>
#include<algorithm>
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll n,m,t;cin>>n>>m;
        set <ll> a,b;
        while(n--){cin>>t;a.insert(t);}
        while(m--){cin>>t;b.insert(t);}
        vector<ll>c;
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(c));
        cout<<c.size()<<"\n";
    }
}