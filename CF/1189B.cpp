#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    vector<ll> v;
    ll q,n,t;cin>>q;n=q;
    while (q--)
    {
        cin>>t;v.push_back(t);
    }
    sort(v.begin(),v.end());
    ll st=*v.begin(),ed=*(v.end()-1),mid=v[ceil((float)n/2)-1];
    v.erase(v.begin()+ceil((float)n/2)-1);
    ll f=1;
            v.push_back(mid);
            cout<<"YES\n";
            for(auto i=v.begin();i!=v.end();i++)
                cout<<*i<<" ";
            cout<<"\n";
}

    