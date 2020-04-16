#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll q;cin>>q;
	while(q--)
	{
		string s;
		cin>>s;
		if(s.length()<3){cout<<"0\n\n";continue;}
		ll cnt=0;
		vector<ll>v;
		for(ll i=2;i<s.length();)
		{
			if(s[i-2]=='o' && s[i-1]=='n' && s[i]=='e'){v.push_back(i);cnt++;i+=3;}
			else if(s[i-2]=='t' && s[i-1]=='w' && s[i]=='o')
			{
				if(i+2<s.length() && s[i+1]=='n' && s[i+2]=='e')
				{v.push_back(i+1);cnt++;i+=5;}
				else
				{v.push_back(i);cnt++;i+=3;}
			}
			else i++;
		}
		cout<<cnt<<"\n";
		for(auto it=v.begin();it!=v.end();it++)
			cout<<*it<<" ";
		cout<<"\n";
	}
}
