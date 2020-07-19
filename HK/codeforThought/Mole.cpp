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
void solve(){
	ll n,x=0,t;
	for(int i=7;i>=0;i--){
		cin >> t;
		x|=(t<<i);
	}
	cin >> n;
    if(n%14==0) 
    	n=14;
    else
	    n=n%14;
	
	for(int i =1;i<=n;i++){
		int a = (x<<1);
		int b = (x>>1);
		a&=((1<<8)-1);
		b&=((1<<8)-1);
		x = a ^ b;
		x = ~x;
		x&=((1<<7)-1);
		if(x&1){
			x--;
		}
	}
	for(int j=7;j>=0;j--)
		cout<< ((x>>j)&1) << " ";
    cout<<"\n";
}
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}