#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll t,n,k;cin>>n>>k;
        ll v[n];
        ll non=-1,pre=0,f=1,nonpre=-1,cn=n,i=0;
        while(i<n)
        {
            cin>>v[i];
            if(k%v[i] || v[i]%v[pre])f=0;
            if(k%v[i])non=i;
            if(v[i]%v[pre])nonpre=i;
            // cout<<v[i]<<" ";
            pre=i;i++;
        }
        // cout<<non<<" "<<nonpre<<"\n";
        if(f)cout<<"NO\n";
        else 
        {
            cout<<"YES ";
            ll ans[cn]={0};
            if(non!=-1)
            {
                ans[non]=ceil((float)k/v[non]);
            }
            else 
            {
                // cout<<nonpre<<":\n";
                ans[nonpre]=ceil((float)k/v[nonpre])-1;
                ans[nonpre-1]=ceil((float)v[nonpre]/v[nonpre-1]);
            }
            for(int j=0;j<cn-1;j++)
                    cout<<ans[j]<<" ";
            cout<<ans[cn-1]<<"\n";
        }

    }
}