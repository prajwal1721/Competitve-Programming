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
    ll n,a,b,u=0;cin>>n>>a>>b;    
    string s;cin>>s;
    
		ll A[n+2][2]={0};
		A[0][0]=b;
		A[0][1]=INT64_MAX-INT32_MAX;
 
		for(ll i=0;i<n;i++){
			if(s[i]=='0') {
				A[i+1][0]=min(A[i][0]+a,A[i][1]+a+a)+b;
				A[i+1][1]=min(A[i][1]+a,A[i][0]+a+a)+b+b;
			}else {
				A[i+1][0]=INT64_MAX-INT32_MAX;
				A[i+1][1]=A[i][1]+b+b+a;
			}
		}
		cout<<A[n][0]<<"\n";    
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}