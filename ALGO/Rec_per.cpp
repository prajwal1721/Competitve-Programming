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
void generate(string s,int ed,int k)
{
    if(k==ed) {cout<<s<<"\n";return;}
    for(int i=k;i<=ed;i++)
    {
        // generate(s,st,ed,k+1);
        {char t=s[k];s[k]=s[i];s[i]=t;}
        // cout<<s<<" ";
        generate(s,ed,k+1);
        {char t=s[k];s[k]=s[i];s[i]=t;}
    }
}
void solve()
{
string s;
    cin>>s;
    generate(s,s.length()-1,0);
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