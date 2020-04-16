#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;

tuple<ll,ll,ll> middle(vector<ll> v,ll st,ll mid,ll ed)
{
	//cout<<st<<" "<<ed<<" "<<mid<<"[]";
	ll left=INT32_MIN,right=INT32_MIN,ls=0,rs=0;
	ll lm,rm,l=mid,r=mid+1;
	while(l>=st)
	{
		ls+=v[l];
		if(left<ls){left=ls;lm=l;}
		l--;
	}
	while(r<=ed)
	{
		rs+=v[r];
		if(right<rs){right=rs;rm=r;}
		r++;
	}
	//cout<<left<<" "<<right<<"\n";
	
	return std::make_tuple(left+right,lm,rm);
}
tuple<ll,ll,ll>  solve(vector<ll> v,ll st,ll ed)
{
		
		//cout<<"in";
		//cout<<st<<" "<<ed<<"\n";
		if(st==ed) return {v[st],st,ed}; 
			tuple<ll,ll,ll> t1,t2,t3;
			ll mid=(st+ed)/2;
			t1=solve(v,st,mid);
			t2=solve(v,mid+1,ed);
			t3=middle(v,st,mid,ed);
	
		if(get<0>(t1)>get<0>(t2) && get<0>(t1)>get<0>(t3)) return t1;
		else if(get<0>(t2)>get<0>(t1) && get<0>(t2)>get<0>(t3)) return t2;
		return t3;
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
		ll st=0,mx,ed=n-1;
		if(pos==n)cout<<"YES\n";
		else
		{tuple<ll,ll,ll> tp=max(solve(v,st+1,ed),solve(v,st,ed-1))	;
	    //cout<<s<<" "<<mx<<"\n";
	    tie(mx,st,ed)=tp;
	    if(mx==s && st==0 && ed==n-1 )cout<<"YES\n";
	    if(mx>=s) cout<<"NO\n";
        else cout<<"YES\n";
		v.clear();
		}
	}

}
