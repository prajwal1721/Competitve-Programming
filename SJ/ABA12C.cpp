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
    ll t,req,n;cin>>req>>n;
    vector<ll> v;
    v.push_back(0);
    for(ll i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
    }
    ll a[n+2][req+2]={0};
    for(ll i=0;i<=req;i++)
    {
        for(ll j=0;j<=n;j++)
            a[i][j]=INT32_MAX;
    }
     for(ll j=1;j<=req;j++)
        {
            ll m=INT32_MAX;
            for(ll k=j;k<=n;k++)
            {
                a[j][k]=INT32_MAX;
                if(j==1)a[j][k]=v[k];
                // else if(j==k)a[j][k]=v[1]*j;
                else 
                {
                    for(ll i=1;i<j;i++)
                    {for(ll l=1;l<k;l++)
                    {
                        if(v[l]!=-1 && a[j-i][k-l]!=-1 )
                        // {cout<< j<<" "<< k<<" "<< k-l<< " "<<j-i<<" "<<a[j-i][k-l]<<" "<<v[l]<<" "<<a[j][k]<<"\n"; 
                            a[j][k]=min(a[j-i][k-l]+v[l],a[j][k]);
                        // }
                    }
                    // cout<<"\n";
                    }
                }
                // if(a[j][k]==INT32_MAX)a[j][k]=-1;
            }       
        }
    

    for(ll i=1;i<=req;i++)
    {
        for(ll j=1;j<=n;j++)
            if(a[i][j]==INT32_MAX || i>j)
                a[i][j]=-1;            
    }
    
    // for(ll i=1;i<=req;i++)
    // {
        // for(ll j=1;j<=n;j++);
            // cout<<a[i][j]<<" ";
        // cout<<"\n";
    // }
    cout<<a[req][n]<<"\n";

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