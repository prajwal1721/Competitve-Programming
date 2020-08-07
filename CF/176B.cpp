// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:sol O(N^3)
    optimize it to O(N^2)
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
ll dp[1000][1000];
void solve()
{
    string a,b;cin>>a>>b;
    set<string> s;
    ll n=a.length(),k;cin>>k;
    map<string,int> mp;
    s.insert(a);
    for(int i=1;i<n;i++){
        string t=a.substr(i,n-i)+a.substr(0,i);
        s.insert(t); 
    }
    int j=1;
    for(auto i:s){
        mp[i]=j;
        j++;
    }
    s.clear();
    ll p=n;
    n=mp.size();
    for(auto i:mp){
        for(int j=1;j<p;j++){
            string t=i.first.substr(j,p-j)+i.first.substr(0,j);
            // cout<<t<<" ";
            if(dp[i.second][mp[t]]==0)
                dp[i.second][mp[t]]=1;
            else
                dp[i.second][mp[t]]+=1;
        }
    }
    vector<ll> pre(1001),now(1000);
    string t=a;
    pre[mp[t]]=1;
    for(int i=1;i<=k;i++){
        vector<ll> add(1001,0);
        for(int j=1;j<=n;j++)
                    if(pre[j]!=0){
                for(int ii=1;ii<=n;ii++){
                    now[ii]+=pre[j]*dp[j][ii];
                }
            }
        for(int j=1;j<=n;j++){pre[j]=now[j]%mod;now[j]=0;}
    }
    
    if(mp[b]!=0)        
        cout<<pre[mp[b]]<<'\n';
    else cout<<"0\n";

    
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