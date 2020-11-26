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
    ll n,t,m;
    cin>>n>>m;
    string a,b;cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int fre1[27]={0},fre2[27]={0};
    for(int i=0;i<n;i++){
        fre1[a[i]-'a']++;
        fre2[b[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(fre1[i]<fre2[i]){
            cout<<"No\n";return ;
        }
       while(fre1[i]>fre2[i]&& fre1[i]>=m) fre1[i]-=m,fre1[i+1]+=m;
            if(fre1[i]!=fre2[i]){
            cout<<"No\n";
            return;
        `
        }
    }
    for(int i=0;i<26;i++){
        if(fre1[i]!=fre2[i])
        {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";return;

    return ;
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