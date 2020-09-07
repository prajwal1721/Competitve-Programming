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
    ll cnt1=0,cnt0=0,q=0,n,t,m;cin>>n>>m;
    string s;cin>>s;

    for(int i=0;i<m;i++){
        int tmp=-1;
        for(int j=i;j<n;j+=m){
            if(s[j]!='?' && tmp==-1){
                tmp=s[j]-'0';
            }
            else if(s[j]!='?' && s[j]-'0'!=tmp){cout<<"NO\n";return ;}
        }
        if(tmp!=-1)
        for(int j=i;j<n;j+=m){
            s[j]=(char)(tmp+'0');
        }
    }
    // cout<<s<<"\n";
    for(int i=0;i<m;i++){
        if(s[i]=='?'){q++;continue;}
        cnt0+=!(s[i]-'0');
        cnt1+=(s[i]-'0');
    }
    // cout<<q<<" "<<cnt0<<" "<<cnt1<<"\n";
    if(q-abs(cnt0-cnt1)<0 || (q-abs(cnt0-cnt1))%2)
        {cout<<"NO\n";return ;}
    cout<<"YES\n";

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