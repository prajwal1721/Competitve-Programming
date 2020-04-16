// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow Nesting_Depth.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;

void solve()
{
    string s;cin>>s;
    ll cur=s[0]-'0';
    for(ll i=0;i<cur;i++)
        cout<<"(";
    cout<<s[0];
    for(ll i=1;i<s.length();i++)
    {

        if(s[i]-'0'==cur)cout<<s[i];
        
        else if(s[i]-'0' > cur)
        {
            // cout<<"in\n"<<cur<<" =";
            while (cur<s[i]-'0')
            {
                cout<<"(";cur++;
            }
            cout<<s[i];
        }
        else
        {
            while (cur>s[i]-'0')
            {
                cur--;
                cout<<")";
            }
            cout<<s[i];
        }    
    }
    while (cur--)
    {
                cout<<")";
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll t,i=1;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(i<=t)
        {
            cout<<"Case #"<<i<<": ";
            solve();
            i++;
            cout<<"\n";
        }

    return 0;
}