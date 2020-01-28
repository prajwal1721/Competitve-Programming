#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,k;
    cin>>n>>k;
    ll ck=k,l=0,sum=k,cn=n;
    n=n-k;
    vector<ll> v;
    while(k-->=1)
    {
        v.push_back(1);
    }auto it=v.begin();
    while(n-->0)
    {
        sum=sum%1000000007;
        cout<<sum<<" "<<*it<<"\n";
        v.push_back(sum);
         sum=2*sum-*it;it++;
    }
    if(cn>k)
    cout<<*(--v.end())%1000000007<<"\n";
    else 
    cout<<"1\n";
}