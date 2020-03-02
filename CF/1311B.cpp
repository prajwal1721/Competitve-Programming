#include<iostream>
#include<vector>
#include<algorithm>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    typedef long long ll;
    ll q;cin>>q;
    while (q--)
    {
        ll ca,cb,aa,t,b;cin>>aa>>b;ca=aa;cb=b;
        vector<ll> a,p;
        while (ca--)
            {cin>>t;a.push_back(t);}
        while (cb--)
            {cin>>t;p.push_back(--t);}     
        sort(p.begin(),p.end());
        bool swap=true;
        while(swap)
        {
            swap=false;
            for(auto i=p.begin();i!=p.end();i++)
            {
                if(*i<aa-1 && a[*i]>a[*i+1] )
                    {SWAP(a[*i],a[*i+1],t);swap=true;}
            }
        }
        swap=true;
        for(auto i=a.begin();i!=a.end()-1;i++)
        {
            if(*i>*(i+1)){swap=false;break;}
        }
        if(swap)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}