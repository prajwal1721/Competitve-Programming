#include<bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long ll;
    string s;cin>>s;ll n=s.length();
    ll i=0,ans=0,cnto=0,cnt=0,s_pair=0;
    vector<ll> v,v2;
	while(i<n)
	{
		while(i<n &&s[i]!='v' )i++;
		cnt=0;
		while(i<n &&s[i]=='v'){cnt++;i++;}
		if(cnt>0)
		{v.push_back(cnt-1);s_pair+=cnt-1;};
		cnto=0;
		while(i<n &&s[i]!='o')i++;
		while(i<n &&s[i]=='o'){cnto++;i++;}
		v2.push_back(cnto);
	}
	n=cnt;ll cur=0;
	//cout<<p<<" "<<n<<"\n";
	for(auto it1=v.begin(),it2=v2.begin();it1!=v.end() && it2!=v2.end();it1++,it2++)
	{
		//cout<<*it1<<" ";
		cur+=*it1;
		ans+=(cur)*(*it2)*(s_pair-cur);
	}
    cout<<ans<<"\n";
}
