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
    string s;cin>>s;
    set<char> st(s.begin(),s.end());
    if(st.size()<3){cout<<"0\n";return;}
    ll a=0,b=0,c=0,ans=s.length();
    for(int i =0;i<s.length();i++)
    {

        if(s[i]=='1')a=i+1;
        else if(s[i]=='2')b=i+1;
        else c=i+1;
        if(a!=0 && b!=0 && c!=0)
        {
            ans=min(ans,max({abs(a-b),abs(b-c),abs(a-c)}));
        }
        // cout<<a<<" "<<b<<" "<<c<<" "<<ans<<"\n";
    }    
    cout<<ans+1<<"\n";
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
