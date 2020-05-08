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
    string s;
    cin>>s;  
    ll n=s.length();
    ll cnt_1=0;
    for(ll i=0;i<n;i++)
    {
        cnt_1+=s[i]-'0';
    }
    if(cnt_1==n || cnt_1==0)cout<<s<<"\n";
    else
    {
        ll f=0;
        string ans="";ans+=s[0];
        // cout<<ans<<"\n";
                // cout<<f<<" "<<ans<<"\n";

        if(s[0]=='1')
        {
            f=1;
        }
            for(ll i=1;i<n;i++)
            {   
                if(f && s[i]=='0'){ans+="0";f=0;}
                else if(f){ans+="01";f=1;}
                else if(!f && s[i]=='1'){ans+="1";f=1;}
                else if(!f){ans+="10";f=0;}
                // cout<<f<<" "<<ans<<"\n";
            }
        cout<<ans<<"\n";        
    }

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