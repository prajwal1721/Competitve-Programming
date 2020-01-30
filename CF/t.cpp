// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x = n;
        ll count=0;
        ll flag=0;
        ll a=0,b=0,c=0;
        for(int i=2;i <= (x); i++)
        {   
            // cout<<n<<" "<<i<<" "<<a<<" "<<" "<<b<<" "<<c<<endl;
            if(n%i == 0)
            {
                count++;
                
                if(n%i == 0 && a != 0 && b != 0)
                {
                    c=i;
                }   
                if(n %i ==0 && a != 0 && b == 0)
                {
                  b=i;            
                }
                if(n %i == 0 && a == 0)
                {
                  a=i;            
                }
                n/=i;
                
                if(n == a || n == b || n == 1)
                {
                    flag = 1;
                    break;
                }


                   
            }
        }
        // cout<<count<<endl;
        if(count == 3)
        {
            cout<<"YES\n";
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
        



    }

    return 0;
}