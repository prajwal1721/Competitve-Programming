#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
int main()
{
    typedef long long ll;
    ll n,k;
    vector<ll> v;
    cin>>n>>k;
    ll p=log2(n+1);
    if(p>k) cout<<"NO\n";
    else
    {
        while(k)
        {
        k-=p;
        while(p--) v.push_back(pow(2,p));
        ll cn=n-pow(2,p)+1;
        if(cn%2==0){
            p=log2(cn+2);
        }
        if(p>k){cout<<"NO\n";k=0;}
        }
    }
}   