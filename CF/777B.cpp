#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll ans1=0,ans2=0,n;string a,b;cin>>n>>a>>b;
	sort(a.begin(),a.end());	sort(b.begin(),b.end());
	for(ll i=0,j=0;i<n&&j<n;)
	{
		//cout<<a[i]<<" "<<b[j]<<"\n";
		if(a[i]>b[j]){ans1++;j++;}
		else if(a[i]==b[j]){i++;j++;}
		else {i++;j++;}
	}
	//reverse(b.begin(),b.end());
	for(ll i=n-1,j=n-1;i>=0&&j>=0;)
	{
		//cout<<a[i]<<" "<<b[j]<<"\n";
		if(a[i]>=b[j]){i--;}
		else {i--;j--;ans2++;}
	}
	cout<<ans1<<"\n"<<ans2<<"\n";
}
