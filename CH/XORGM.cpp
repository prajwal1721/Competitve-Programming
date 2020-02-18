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
        ll n,i=0,t,XOR=0;cin>>n;
        vector<ll>b,ans,a;
        while(i++<n){cin>>t;a.push_back(t);XOR=XOR^t;}i=0;
        while(i++<n){cin>>t;b.push_back(t);XOR=XOR^t;}
        ll f=1;
        sort(b.begin(),b.end());
        for(auto ii=a.begin();ii!=a.end();ii++ )
        {
            if(!binary_search(b.begin(),b.end(),XOR^(*ii))){f=0;break;}
            ans.push_back(XOR^(*ii));
        }
        if(f){
            for(auto ii=ans.begin();ii!=ans.end();ii++)
                cout<<*ii<<" ";
            cout<<"\n";
        }
        else
            cout<<"-1\n";
        
    }
}