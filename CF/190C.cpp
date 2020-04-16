// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
ll f=0;
string ans="";

void solve()
{
    string s;
	if(cin>>s)
	{
		ans+=s;
		if(s=="pair")
		ans+="<", solve(), ans+=",", solve(), ans+=">";
	}
    else
    f=1;
}


int main()
{ 

    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);


    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        // {   
            string s;
            solve();
     if(f|| cin>>s)
            cout<<"Error occurred\n";
    else cout<<ans<<"\n";
        // }


    return 0;
}