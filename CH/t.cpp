#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pob pop_back
#define pf push_front
#define popb pop_back()
#define popf pop_front()
#define ll long long int
#define llu long long unsigned int 
#define lu long unsigned int 
#define ff first
#define ss second 
#define S size()
#define inf 1e8
#define MOD 1000000007
#define clr(a) memset(a, -1, sizeof(a))
#define fr(i, x, y) for ( ll i = x; i < y;i++)
#define dc(i, x, y) for ( ll i = x; i >= y; i--)
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define PI 3.1415926535897932384626433832795
#define pqueue priority_queue<ll>
#define piqueue priority_queue<ll,vll ,greater<ll>>
#define mapcl map<char,ll>
#define mapll map<ll,ll>
#define mapsl map<string,ll>
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define piii pair<pii,ll>
#define vii vector<pii>
using namespace std;
void fast(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
}  
//----------------------------------------FUNCTIONS-------------------------------------
ll gcd(ll x,ll y )
{
    if(y==0) return x;
    return gcd(y,x%y);
}

//----------------------------------------START------------------------------------------ 
int main()
{
	ll t;
	cin>>t;
	 while(t--)
	 {
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll c1=n,c2=n,sum1=0,sum2=0;
		ll ans=2*n;
		fr(i,0,2*n)
		{
			if(i%2==0)
			{
				sum1+=(s[i]-'0');
				c1--;
			}
			else
			{
				sum2+=(s[i]-'0');
				c2--;
			}
			if(sum1>sum2+c2)
			{
				ans=i+1;
				break;
			}
			else if(sum2>sum1+c1)
			{
				ans=i+1;
				break;
			}
		}
		cout<<ans<<'\n';
	 }
	return 0;
}