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
    ll a[200001];
    while(k-->=1)
    {
        a[l++]=1;
    }auto it=0;
    while(n-->0)
    {
        sum=sum%1000000007;
        // cout<<sum<<" "<<a[it]<<"\n";
        a[l++]=sum;
         sum=2*sum-a[it];it++;
    }
    // if(cn>k)
    cout<<a[cn-1]<<"\n";
    // else 
    // cout<<"1\n";
}