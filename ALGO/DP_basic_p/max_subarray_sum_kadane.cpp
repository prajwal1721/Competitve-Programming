#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t;cin>>n;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll local[n+1]={0},mx=0;
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)local[i]=v[i];
        else local[i]=max(local[i+1]+v[i],v[i]);
        mx=max(mx,local[i]);
    }
    cout<<mx<<'\n';
}

/**
 * 9 
 * 2 -8 6 -4 5 -1 0 -4 8 
 * ans =10
 */