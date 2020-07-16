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
void print(ll n,char c)
{
    for(int i=0;i<n;i++)
        cout<<c;
    cout<<"\n";
}
void solve()
{
    map<char,char>mp;
    ll freq[3]={0};
    mp['R']='P';
    mp['S']='R';
    mp['P']='S';
    string s;cin>>s;
    ll n=s.length();
    for(auto i:s)
    {
        if(i=='R')freq[0]++;
        if(i=='S')freq[1]++;
        if(i=='P')freq[2]++;
    }
    if(freq[0]>=freq[1] && freq[0]>=freq[2] )print(n,'P');
    else if(freq[1]>=freq[0] && freq[1]>=freq[2] )print(n,'R');
    else print(n,'S');
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