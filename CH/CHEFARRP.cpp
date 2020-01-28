#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {   
        ll n,t;
        vector<ll> v;
        cin>>n;
        while(n--)
        {
            cin>>t;
            v.push_back(t);
        }
        ll count=v.size();
        for(ll i=2;i<v.size();i++)
                if(v[i]*v[i-1]*v[i-2]==6 && v[i]+v[i-1]+v[i-2]==6)
                    {
                        count++;ll p=i;
                        while(v[p+1]==1 && p++<v.size()) count++;
                    }
        for(ll i=1;i<v.size();i++)
                if(p++<v.size()&& v[p+1]==1 )
                    {
                        count++;ll p=i;
                        while(p+1<v.size()&& v[p+1]==1 ) count++;
                    }
        for(ll i=1;i<v.size();i++)
                if(v[i]*v[i-1]==4 && v[i]+v[i-1]==4)
                    {
                        count++;ll p=i;
                        while(p++<v.size()&& v[p+1]==1 ) count++;
                    }
        cout<<count<<"\n";
    }
}