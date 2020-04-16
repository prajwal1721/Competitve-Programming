#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
ll  solve(vector<ll> v,ll n)
{
	ll s=0;
	for(ll i=0;i<n;i++)
	{
		s+=v[i];
		if(s<=0)return 1;
	}s=0;
	for(ll i=n-1;i>=0;i--)
	{
		s+=v[i];
		if(s<=0)return 1;
	}
	return 0;
}
int main()
{

    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll q;
    cin>>q;
    while(q--)
    {
		ll s=0,n,cn,t,pos=0;
		cin>>n;cn=n;
		vector<ll> v;
		while(cn--)
		{
			cin>>t;v.push_back(t);s+=t;
			if(t>0)pos++;
		}
		if(pos==n)cout<<"YES\n";
		else
	    {
		if(solve(v,n)==0 )cout<<"YES\n";
	    else cout<<"NO\n";
		v.clear();
		}
	}

}
