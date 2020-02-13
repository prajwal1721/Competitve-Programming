#include<iostream>
#include<cmath>
#include<set>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
    ll q;
        scanf("%lld",&q);
    while(q--)
    {


        set<ll> x1,x2,y1,y2;
        ll x,t,y,sx1=0,sx2=0,sy1=0,sy2=0,z=0;
        scanf("%lld%lld",&x,&y);
        while(x--)
        {
            scanf("%lld",&t);
            if(t>0){x1.insert(t);sx1++;}
            else if(t<0){x2.insert(abs(t));sx2++;}
            else z=1;
        }
        while(y--)
        {
            scanf("%lld",&t);
            if(t>0){y1.insert(t);sy1++;}
            else if(t<0){y2.insert(abs(t));sy2++;}
            else z=1;
        }

        ll ans=0;
        for(auto i=x1.begin();i!=x1.end();i++)
            for(auto j=x2.begin();j!=x2.end();j++)
            {
                float p=sqrt((*j)*(*i));
                if(round(p)==p && binary_search(y1.begin(),y1.end(),sqrt((*j)*(*i))) )ans++;
                if(round(p)==p && binary_search(y2.begin(),y2.end(),sqrt((*j)*(*i))) )ans++;
            }
        for(auto i=y1.begin();i!=y1.end();i++)
            for(auto j=y2.begin();j!=y2.end();j++)
            {
                float p=sqrt((*j)*(*i));
                if(round(p)==p && binary_search(x1.begin(),x1.end(),sqrt((*j)*(*i))) )ans++;
                if(round(p)==p && binary_search(x2.begin(),x2.end(),sqrt((*j)*(*i))) )ans++;
            }
            if(z==1)ans+=(sx1+sx2)*(sy1+sy2);
            printf("%lld\n",ans);
    }
}
