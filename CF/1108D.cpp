#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll> mp;
void solve(string s,ll n)
{
	for(ll i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		{
			ll t=i-1;
			ll j=i+1;
			ll cnt=1;
			while(s[j]==s[i])
			{
				cnt++;j++;
			}
			i=j;
			mp[t]=cnt;
		}
	}
	ll cnt=0;
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if((*it).second%2==0)
		{
			for(ll j=(*it).first+1;j<=(*it).first+(*it).second;)
			{
				cnt++;
				if(s[j]=='B')
					s[j]='R';
				else if(s[j]=='R')
					s[j]='G';
				else
					s[j]='B';
				j+=2;
			}
		}
		else
		{
			for(ll j=(*it).first+1;j<(*it).second+(*it).first;)
			{
				cnt++;
				//cout<<j<<" "<<(*it).second<<"\n";
				if(s[j]=='B')
					s[j]='R';
				else if(s[j]=='R')
					s[j]='G';
				else
					s[j]='B';
				j+=2;
			}
			if( s[(*it).second+(*it).first]=='B')
			{
				
				if(((*it).second+(*it).first<n-1 && s[(*it).second+(*it).first+1]!='G') || (*it).second+(*it).first==n-1)
					s[(*it).second+(*it).first]='G';
				else
					s[(*it).second+(*it).first]='R';
			}
			else if( s[(*it).second+(*it).first]=='R')
			{
				
				if(((*it).second+(*it).first<n-1 && s[(*it).second+(*it).first+1]!='G') || (*it).second+(*it).first==n-1)
					s[(*it).second+(*it).first]='G';
				else
					s[(*it).second+(*it).first]='B';
			}
			else if( s[(*it).second+(*it).first]=='G')
			{
				
				if(((*it).second+(*it).first<n-1 && s[(*it).second+(*it).first+1]!='B') || (*it).second+(*it).first==n-1)
					s[(*it).second+(*it).first]='B';
				else
					s[(*it).second+(*it).first]='R';
			}
			cnt++;
		}
	}
	cout<<cnt<<"\n"<<s<<"\n";
}
int main()
{
	ll n;cin>>n;
	string s;cin>>s;
	solve(s,n);
}
