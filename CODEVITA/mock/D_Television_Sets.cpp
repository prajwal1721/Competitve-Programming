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
    ll n,TV,non,tar;cin>>n>>TV>>non>>tar;

    ll arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    ll ans=0,r=0,a=n;
    for(int ii=1;ii<n;ii++)
        {
            ans=0;
            for(int i=1;i<=12;i++)
                {for(int j=1;j<=arr[i-1];j++)
                    {
                        r=min(n,(ll)pow(abs(6-i),2)+abs(j-15));
                        ll T=0;
                        if(r>n-ii)T=min((ll)ii,(r-n+ii));
                        ans+=T*TV+min(r,n-ii)*non;
                    }
                }
            if(ans>=tar){a=ii;break;}
        }   
    cout<<a<<"\n";
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