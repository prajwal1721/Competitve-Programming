// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




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
    ll f=1,s1=0,s2=0,s3=0,s4=0;
    for(ll i=1;i<s.length();i++)
        {
            if(s[i-1]=='B' && s[i]=='A' && !s1 ){s1++;}
            if( s[i-1]=='A' && s[i]=='B' && !s2){s2++;}
            if(s[i-1]=='B' && s[i]=='A' && i!=s.length()-1  && s[i+1]=='B'){s3++;}
            if(s[i-1]=='A' && s[i]=='B' && i!=s.length()-1  && s[i+1]=='A'){s4++;}

        }

    
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

// 
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}