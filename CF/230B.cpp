#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    while(n--)
    {
        ll t;
        cin>>t;
        if(t==4)cout<<"YES\n";
        else if(t>3)
        {
            ll p;
            if(ceil(sqrt(t))==floor(sqrt(t)))
            {
                p=sqrt(t);
                if((p+1)%6==0 || (p-1)%6==0 || p==2 || p==3)
                    cout<<"YES\n";
                else cout<<"NO\n";
                
            }
                else cout<<"NO\n";
        }
        else 
            cout<<"NO\n";
    }   
}