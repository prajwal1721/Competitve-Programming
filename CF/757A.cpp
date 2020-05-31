// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void solve()
{
    ll n,m,i,j,k=0,l=0,t=0,c,x=0,y=0; 
    string str;
    cin>>str;
    map<char,ll>mp;
    for(i=0;i<str.size();i++){
 
        mp[str[i]]++;
    }
 
    ll mx=mp['B'];
    mx=min(mx,mp['u']/2);
    mx=min(mx,mp['a']/2);
    mx=min(mx,mp['l']);
    mx=min(mx,mp['b']);
    mx=min(mx,mp['s']);
    mx=min(mx,mp['r']);
 
    cout<<mx<<endl;
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