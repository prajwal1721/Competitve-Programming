#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,cn,t;cin>>n;cn=n;
	vector<ll> v;
	map<ll,ll>mp;
	mp[4]=1;mp[8]=2;mp[15]=3;mp[16]=4;mp[23]=5;mp[42]=6;
	while(cn--)
	{
		cin>>t;v.push_back(mp[t]);
	}
	ll cnt[7]={0};
	ll st=0,ed=n-1,it=0;
	for(ll i=0;i<n;i++)
	{
		if(v[i]!=1 && cnt[v[i]]<cnt[v[i]-1])
			cnt[v[i]]++;
		else if(v[i]==1)
			cnt[v[i]]++;
		// cout<<v[i]<<" "<<cnt[v[i]]<<"\n";
	}
	cout<<n-6*cnt[6]<<"\n";
}
