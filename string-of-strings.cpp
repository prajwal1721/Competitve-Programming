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
    ll n,q;
    string s,t;cin>>s;
    cin>>q;n=s.length();
    ll a[28][28][28]={0};
    ll p=0;
    for(int i=0;i<q;i++)
    {
        cin>>t;
        if(t.length()==1 && a[t[0]-'a'+1][0][0]!=1)
            {a[t[0]-'a'+1][0][0]=1;p++;}
        else if(t.length()==2 && a[t[0]-'a'+1][t[1]-'a'+1][0]!=1)
            {a[t[0]-'a'+1][t[1]-'a'+1][0]=1;p++;}
        else if(t.length()==3 && a[t[0]-'a'+1][t[1]-'a'+1][t[2]-'a'+1]!=1)
            {a[t[0]-'a'+1][t[1]-'a'+1][t[2]-'a'+1]=1;p++;}
    }
    ll cnt=0;
    ll visit[n+1]={0};
    {visit[0]=1;}
    for(int i=0;i<s.length();i++)
    {
        cnt=0;
        if(a[s[i]-'a'+1][0][0]==1 && visit[i]==1){visit[i+1]=1;}
        if(i+1<n && a[s[i]-'a'+1][s[i+1]-'a'+1][0]==1 && visit[i]==1){cnt+=1;visit[i+2]=1;}
        if(i+2<n && a[s[i]-'a'+1][s[i+1]-'a'+1][s[i+2]-'a'+1]==1 && visit[i]==1)
        {visit[i+3]=1;}
    }
    if(visit[n])cout<<"YES\n";
    else cout<<"NO\n";
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