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
        ll a,b;
        cin>>a>>b;
        if(b>a)cout<<"0\n";
        else if(b==a)cout<<b%10<<"\n";
        else 
        {
            ll s=0;
            ll f=0;
            ll ans[11];
                for(ll i=1;i<11;i++)
                {
                    ans[i]=b*i;s+=ans[i]%10;
                }
                // cout<<s<<" \n";
            if(a/b>=1){f=s*floor(a/(b*10));a=a%(b*10);}
            for(ll i=1;i<10;i++)
            {
                if(ans[i]<=a)f+=ans[i]%10;
                else break;
            }
            cout<<f<<"\n";
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