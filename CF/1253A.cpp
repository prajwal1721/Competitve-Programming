#include<iostream>
#include<queue>
#include<set>
using namespace std;
typedef long long ll ;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        queue<ll> q,dif;
        ll n,r1,r,t,check=0,temp,f=1;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>t;
            q.push(t);
        }
        do
        {
            cin>>t;
            dif.push(t-q.front());
            q.pop();
        }while(!q.empty());
        f=1;
        while(!dif.empty())
        {
            if(dif.front()<0) {f=0;break;}
            if( dif.front()>0)
               {
                    r=dif.front();
                    break;
               }
               dif.pop();
        }
        while(!dif.empty() && f)
        {
            if(dif.front()<0) {f=0;break;}
            if(dif.front()!=r)break;
            dif.pop();
        }
        while(!dif.empty() && f)
        {
            if(dif.front()!=0) {
                f=0; break;
            }
            dif.pop();
        }
        if((f==0 || s.size()>1))
            f=0;
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
        f=1;
    }
    
}