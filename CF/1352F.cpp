// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
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
	    int a,b,c;
		cin >> a >> b >> c;
		string x="";
		if(a) for(int i=0;i<a+1;i++) x+="0";
		if(c) for(int i=0;i<c+1;i++) x+="1";
		if(a&&c) b--;
		if(x.size()==0) x+="0";
		for(int i=0;i<b;i++)
			x+=(1-(x.back()-'0'))+'0';
		cout << x << "\n";
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