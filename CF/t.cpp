
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define pb push_back

typedef long long int ll;

void solve()
{
    ll a,b,q;
    cin>>a>>b>>q;
    ll l= lcm(a,b);
    while(q--)
    {
        ll x,y;cin>>x>>y;
         if(y<max(a,b) || a==b)
        cout<<"0"<<" ";
        else if(l>y)
        {
            cout<<y-max(a,b)+1<<" ";
        }
        else
        {
            ll res=y-x+1-max(a,b);
            if(res<0)cout<<"0"<<" ";
            else cout<<res<<" ";
        }
    }
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t=1;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	

    return 0;
}