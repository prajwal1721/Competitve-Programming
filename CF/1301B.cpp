#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>
#include<vector>
using namespace  std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while (q--)
    {
        ll n;cin>>n;
        vector<ll> v;
        set<ll> ans;
        ll t,cn=n;
        while (n--)
        {
            cin>>t;v.push_back(t);
        }
        n=cn;
        for(auto i=1;i<n-1;i++ )   
        {
            if(v[i]==-1)
            {
                if(v[i+1]!=-1)ans.insert(v[i+1]);
                if(v[i-1]!=-1)ans.insert(v[i-1]);
            }
        }
        if(v[0]==-1&& v[1]!=-1)ans.insert(v[1]);
        if(v[n-1]==-1&& v[n-2]!=-1)ans.insert(v[n-2]);
        ll a=0;
    if(ans.empty()){a=0;}

        if(!ans.empty())
        {
            ll ans_min=*ans.begin(),ans_max=*ans.rbegin(),cc=0;
            // cout<<ans_min<<":"<<ans_max<<"\n";
        a=(ans_min+ans_max)/2;
        }
        ll  dif=INT32_MIN;
            for(auto j=v.begin();j!=v.end()-1;j++)
            {
                if(*j==-1 && *(j+1)==-1)dif=max(dif,(ll)0);
                else if(*j==-1)
                    dif=max(dif,abs(a-*(j+1)));
                else if(*(j+1)==-1 )
                    dif=max(dif,abs(a-*(j)));
                else  
                dif=max(dif,abs(*j-*(j+1)));
            }   
        cout<<dif<<" "<<a<<"\n";
        }
    
}