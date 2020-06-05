// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
void solve()
{
		int n,i,j,m,k,mx=-1;
		ll ans=0;
		cin>>n>>m;
		int ara[n+1];
		for(i=1;i<=n;i++){
			cin>>k;
			ara[k]=i;
		}
		for(i=1;i<=m;i++){
			cin>>k;
			if(mx<ara[k]){
				ans += 1+ 2*(ara[k]-i);
				mx = ara[k];
			}
			else{
				ans++;
			}
		}
		cout<<ans<<endl;
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {   
            solve();
        }


    return 0;
}