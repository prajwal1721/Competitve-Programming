
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
typedef long long int ll;
void solve()
{
		ll n;cin>>n;
		
		if(n==1)
		{
		  cout<<"1\n1 1\n";return;
		}
		cout<<floor(n/2)<<endl;
		ll j=1;
		for( ll i=1;i<=n/2;i++)
        {
            if(i==1 && n%2)
            {
                cout<<3<<" "<<j<<" "<<j+1<<" " << n<<"\n";j+=2;
            }
            else
            {cout<<2<<" "<<j<<" "<<(j+1)<<"\n";j+=2;}
        }
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	while(t--)
	{
		solve();
	}
	

    return 0;
}