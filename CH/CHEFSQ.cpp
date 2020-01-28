#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,w,t;
        cin>>n;
        vector<ll> a,b;
        while(n--)
        {
            cin>>t;
            a.push_back(t);
        }
        cin>>w;
        while(w--)
        {
            cin>>t;
            b.push_back(t);
        }
        auto p=a.begin(),q=b.begin();
        while(p!=a.end() && q!=b.end())
        {
            if(*p==*q) {p++;q++;}
            else p++;
        }        
        if(q==b.end())cout<<"Yes\n";
        else cout<<"No\n";
    }
}