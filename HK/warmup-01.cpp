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
    ll cnt_p=0,cnt_t=0,cnt_ic=0;
    ll ans=0,n=s.length();
    for(int i=0;i<n;)
    {
        while(i<n && s[i]=='P'){cnt_p++;i++;}
        while(i<n && s[i]!='T')
        {
            if(i+1<n && s[i]=='I' && s[i+1]=='C'){i+=2;cnt_ic++;}
            else i++;
        }
        while(i<n && s[i]=='T'){cnt_t++;i++;}
        ans+=cnt_ic*cnt_p*cnt_t;
        ans%=mod;
        // cout<<cnt_ic<<" "<<cnt_p<<" "<<cnt_t<<"\n"; 
        cnt_t=0;
    }
        for(int i=0;i<n;)
    {
        while(i<n && s[i]=='P'){cnt_p++;i++;}
        while(i<n && s[i]!='T')
        {
            if(i+1<n && s[i]=='I' && s[i+1]=='C'){i+=2;cnt_ic++;}
            else i++;
        }
        while(i<n && s[i]=='T'){cnt_t++;i++;}
        ans+=cnt_ic*cnt_p*cnt_t;
        ans%=mod;
        // cout<<cnt_ic<<" "<<cnt_p<<" "<<cnt_t<<"\n"; 
        cnt_t=0;cnt_ic=0;
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