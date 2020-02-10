#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while(q--)
    {
        ll n,t,k;cin>>n>>k;
        ll cn=n;
        vector<ll> a,b;
        while(n--)
        {
            cin>>t;t=t%k;
            a.push_back(t);
            t=(k-t)%k;
            b.push_back(t);
        }
        reverse(b.begin(),b.end());
        
        ll ans=0,i=0,j=0;
        while(i<cn-j)
        {
            if(ans>0)ans-=b[j++];
            else ans+=a[i++];
        }
        
        if(ans<0)
            {
                ans=0;
                for(i=0;i<cn;i++)ans+=a[i];
            }
        cout<<ans%k<<"\n";
       
    }
}