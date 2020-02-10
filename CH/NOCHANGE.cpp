#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll t,n,k;cin>>n>>k;
        vector<ll> v;
        while(n--)
        {
            cin>>t;v.push_back(t);
        }
        ll one=0;
        if(*v.begin()==1)one=1;
        reverse(v.begin(),v.end());
        auto a=v.begin();ll sum=0;
        while(a!=v.end())
        {
            auto p=a;
            while(sum<=k && p!=v.end())
            {   
                if(*p!=1)
                {
                    sum+=
                }
            }
        }
    }
}