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
    ll t=0,st=0;
    ll loc=0;
    for(ll i=0;i<9;i++)
    {
        string s;
        cin>>s;
        for(ll j=0;j<9;j++)
        {
            if(t==i && j==st+loc && s[j]!='1'){cout<<1;  }
                    else if(t==i && j==st+loc && s[j]=='1'){cout<<2;   }
                    else cout<<s[j];
        }
        loc+=3;
        if(i%3==2){st++;loc=0;}
        t++;
        cout<<"\n";
    }  
    // cout<<"done\n";
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