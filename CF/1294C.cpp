#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef long long ll;
vector<ll>v;
int di(ll n,ll p)
{
    for(ll i=p+1;i<=sqrt(n);i++)
        if(n%i==0 && n/i!=i && n/i!=p)
        {v.push_back(i);v.push_back(n/i);return 1;}        
    return 0;
}
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll n,f=0;
        cin>>n;
        for(ll i=2;i<n/2;i++)
            if(n%i==0 && ceil(sqrt(n/i))!=floor(sqrt(n/i)) ){
                if(di((ll)n/i,i)){v.push_back(i);f=1;break;}
            }
        if(f){cout<<"YES\n"<<v[0]<<" "<<v[1]<<' '<<v[2]<<"\n";v.clear();}
        else cout<<"NO\n";
    }
}