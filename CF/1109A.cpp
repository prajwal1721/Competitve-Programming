#incldue<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
map<pair<ull,ull>,ull> mp;
 void solve(vector<ull>v,ull st,ull ed)
{
	if(st==ed)mp[st,ed]=v[st];
	else
	{
		ull mid=(st+ed)/2;
		while(mid>=0)
		{
		
		}
	}

}
int main()
{
	vector<ull> v;
	ull n,cn,t;cin>>n;cn=n;
	while(cn--)
	{
		cin>>t;v.push_back(t);
	}
	solve(v,0,n-1);
}
