#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll n,x,n_0=0,n_1=0;
        cin>>n>>x;
        string s;
        cin>>s;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='1')n_1++;
            else n_0++;
        }
        ll bal=n_0-n_1;
        if(bal==x || bal==0 && x==0)cout<<-1<<"\n";
        else if(bal<0) cout<<0<<"\n";
        else 
        {
            ll count=0;
            x-=((ll)x/bal)*bal;
            if(x==0)x=bal;
            ll c_bal=0;
            for(ll i=0;i<s.length();i++)
            {
                if(s[i]=='0')c_bal++;
                else c_bal--;
                if(c_bal==x)count++;
            }
            ll can_0=c_bal-bal;
            for(ll i=0;i<s.length();i++)
            {
                if(s[i]=='0')can_0++;
                else can_0--;
                if(can_0==0)count++;
            }
            cout<<count<<"\n";
        }

    }
}