#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll q,t,n;cin>>q;
    while(q--)
    {
        vector<ll> m,w;
        cin>>n;
        ll i=0;
        while(i++<n){cin>>t;m.push_back(t);}
        i=0;
        while(i++<n){cin>>t;w.push_back(t);}
        sort(m.begin(),m.end());
        sort(w.begin(),w.end());ll sum=0;
        for(auto i=0;i<n;i++)
        {
            sum+=m[i]*w[i];
        }
        cout<<sum<<"\n";
    }
}