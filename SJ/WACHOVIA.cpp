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
    ll W,k,t,t1;cin>>W>>k;
    vector<ll> w,val;
    for(ll i=0;i<k;i++)
    {
        cin>>t>>t1;w.push_back(t);
        val.push_back(t1);
    }   
    ll ans[W+1];
    ll a[k+1][W+1]={0};
    for(ll i=0;i<=k;i++)
    {
        for(ll j=0;j<=W;j++)
        {
            if(i==0 || W==0){a[i][j]=0;}
            else
            {
                a[i][j]=a[i-1][j];
                if(w[i-1]<=j) 
                    {
                        a[i][j]=max(a[i-1][j],a[i-1][j-w[i-1]]+val[i-1]);
                    }
            }
        }
    }
    cout<<"Hey stupid robber, you can get "<<a[k][W]<<".\n";
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