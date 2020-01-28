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
        ll n,k,t,sum=0;
        cin>>n>>k;
        vector<ll> v;
        while(n--)
        {
            cin>>t;v.push_back(t);sum+=t;
        }
        ll  del,tsum=0,count=0;
        for(auto a=v.begin();a<v.end();a++)
        {
            tsum=sum-*a;
            if(tsum<*a+k) count++;
        }
        cout<<count<<"\n";
    }
}
