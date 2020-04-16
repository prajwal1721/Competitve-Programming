#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll ans=0,n,t,k;cin>>n>>k;ll cn=n;
    vector<ll> v,sleep,r,time,lp;ll cur=0;
    v.push_back(0);
    r.push_back(0);
    while(n--)
    {
        cin>>t;
        cur+=t;
        v.push_back(cur);
		r.push_back(t);
    }
    ll i=1;
    n=cn;cur=0;
    time.push_back(0);
    sleep.push_back(0);
    while(n--)
    {
        cin>>t;
        sleep.push_back(t);
        if(t)
        cur+=r[i];
        time.push_back(cur);
        i++;
    }    cn++;
    r.clear();
    n=cn;
    ans=cur;
    for(i=1;i<cn;i++)
    {
		if(!sleep[i])
		{
			//cout<<i<<" "<<time[i]<<" "<<v[min(i+k-1,cn-1)]<<" "<<v[i]<<" "<<time[n-1]<<" "<<time[min(i+k,n-1)]<<"\n";
			ans=max(ans,time[i]+v[min(i+k-1,n-1)]-v[i-1]+time[n-1]-time[min(i+k-1,n-1)]);
		}
	}
		cout<<ans<<"\n";
}
