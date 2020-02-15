#include<bits/stdc++.h>
using namespace std; 

typedef long long int ll;
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((ll)a*b/__gcd(a,b))


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {
        ll n,a,b,k;
        cin>>n>>a>>b>>k;
        ll ans = (n/a)+(n/b)-(2*n/lcm(a,b));
        cout<<lcm(a,b);
        if(ans>= k)
            cout<<"Win\n";
        else
            cout<<"Lose\n";

    }
    

    return 0;
}