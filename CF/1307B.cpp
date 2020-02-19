#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll ;
int main()
{
    ll t;cin>>t;
    while (t--)
    {
        vector<ll> v;
        ll n,k,p;cin>>n>>k;
        while (n--)
        {   cin>>p;v.push_back(p);
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll m=*v.begin();
        if(m>k){
            if(binary_search(v.begin(),v.end(),k,greater<ll> ()))cout<<1<<"\n";
            else
                cout<<2<<"\n"; 
                }
        else cout<<(int)ceil((float)k/m)<<"\n";
    }
    
}