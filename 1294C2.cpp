#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        vector<ll>v;
        ll n,p=1;
        cin>>n;ll cn=n;
        for(ll i=2;i<cn;i++)
        {
            if(n%i==0 && p!=3) {v.push_back(i);n/=i;p++;}
            else if(p==3 && n%i==0 && n/i==1){v.push_back(i);p++;break;}
        }
    if(p==4){cout<<"YES\n"<<v[0]<<" "<<v[1]<<' '<<v[2]<<"\n";v.clear();}
        else cout<<"NO\n";
    }

}