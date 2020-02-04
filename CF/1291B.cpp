#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while(q--)
    {
        ll n,t;
        cin>>n;ll cn=n;
        vector<ll> v;
        while(n--){
            cin>>t; v.push_back(t);
        }
        if(cn==1)cout<<"Yes\n";
        else if(cn==2){
            if(v[0]==v[1] && v[0]==0)cout<<"No\n";
        else cout<<"Yes\n";
        }
        else{
        auto i=v.begin();
        for(;i!=v.end()-1;i++)
        {
            if(*i>*(i+1))break;
        }
        ll f=1,p=0;
        if(*i==*(i+1) && *i==1)f=0;
        if(f)
        for(auto b=v.begin();b!=(i+1);b++)
        {
            if(*b<p){f=0;break;}p++;
        }
        p=0;
        if(f)
        for(auto b=v.end()-1;b!=i;b--)
        {
            if(p>*b){f=0;break;}p++;
        }
        if(f==1)cout<<"Yes\n";
        else cout<<"No\n";
        }
    }

}