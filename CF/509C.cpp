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
    ll n,t;cin>>n;
    ll cur=0,pre=0;
    while (n--)
    {
        cin>>t;
        if(cur>=t)
        {cout<<ceil((float(cur)/9))*9+t<<" ";
        cur=ceil((float(cur)/9))*9+t;
        }
        else
        {
            cur=cur+t-pre;
            cout<<cur<<" ";
        }
        pre=t;
    }
    

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