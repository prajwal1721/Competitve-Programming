#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll a,b,c;
        vector<ll>v;
        ll n,p=1;
        cin>>n;ll cn=n;
        for(ll i=2;i<cn;i++)
        {
            if((ll)n/i==0)break;
            if(n%i==0 && p==1) {a=i;n/=i;p++;}
            else if(n%i==0 && p==2) {b=i;n/=i;p++;}
            else if(p==3 && n%i==0 && n/i==1){c=i;p++;break;}
        }
    if(p==4){cout<<"YES\n"<<a<<" "<<b<<' '<<c<<"\n";v.clear();}
        else cout<<"NO\n";
    }

}