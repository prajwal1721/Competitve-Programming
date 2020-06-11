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
    string s[2];cin>>s[0]>>s[1];
    s[0]+='X';s[1]+'X';
    ll h=0,p=0,ans=0;
    for(int i=0;i<s[0].length();i++)
    {
        if(p==0 && s[0][i]=='0' && s[1][i]=='0'){p=1;if(h){ans++;h=0;p=0;}}
        else if(p==1 && s[0][i]=='0' && s[1][i]=='0'){p=0;h=1;ans++;}
        else if(s[0][i]=='0'|| s[1][i]=='0'){h=1;if(p==1){ans++;p=0;h=0;}}
        else {p=0;h=0;}
    }
    cout<<ans<<"\n";
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