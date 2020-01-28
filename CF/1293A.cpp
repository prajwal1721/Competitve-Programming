#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,s,k,t,low=1,high=s,f=0;
        cin>>n>>s>>k;
        low=s;high=s;
        vector<ll> v;
        v.push_back(-1);
        while(k--)
            {
                cin>>t;v.push_back(t);
            }
            auto it=v.begin();
        sort(v.begin(),v.end());
        for(it=v.begin();it<v.end() && *it<=s;it++);it--;
        // cout<<*it<<'\n';
        for(auto b=it;*b>0 ;low--)
        {
            

            if(low!=*b || *b==-1){f=1;break;}
            else b--;
        }
        if(*it!=s) it++;
        ll r=0;
        auto b=it;
        for(;b!=v.end();high++)
        {

            if(high!=*b){r=1;break;}
            else b++;
        }
        if(b==v.end())r=1;
        // cout<<high<<" "<<low;
        // cout<<f<<":"<<r;
        if(f && r)
        cout<<(min(s-low, high-s))<<"\n";
        else if(r)
        cout<<high-s<<"\n";
        else if(f && low!=0)
        cout<<s-low<<"\n";
        else
        cout<<-1<<"\n";
    }
    
}
