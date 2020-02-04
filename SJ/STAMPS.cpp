#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;cin>>n;ll o=1;
    while(n--)
    {
        vector<ll> v;
        ll t,sum=0,s,q;cin>>s>>q;
        while(q--)
        {
            cin>>t;v.push_back(t);
            sum+=t;
        }
        cout<<"Scenario #"<<o<<":\n";o++;
        if(sum<s)cout<<"impossible\n";
        else{
            ll count=0;
            sort(v.rbegin(),v.rend());
            for(auto a=v.begin();a!=v.end() && s>0;a++)
            {
                s-=*a;count++;
            }
            cout<<count<<"\n";

        }   
        cout<<"\n";
    }
}