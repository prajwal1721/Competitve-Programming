#include<iostream>
#include<map>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll i=3,n,l,pre;
        cin>>n;
        map<ll,ll> m,p,count;
        m[0]=2;
        p[0]=1;
        pre=0;
        count[0]=2;
        if(n<=2) cout<<n<<"\n";
        else
        {
            while(i<=n)
            {
                if(p[pre]!=0 && pre!=0 || pre==0)
                    {pre=m[pre]-p[pre];count[pre]++;}
                else 
                    {pre=0;count[pre]++;}
                m[pre];
                p[pre]=m[pre];
                m[pre]=i++;
                // cout<<pre<<" ";
            }
            cout<<count[pre]<<"\n";
        }
    }
}