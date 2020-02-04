#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    ll t,sum=0;
    cin>>n;
    while(n!=-1)
    {
    vector<ll> v;
        sum=0;
        ll cn=n;
        while(n--)
        {
            cin>>t;
            v.push_back(t);
            sum+=t;
        }
        if((sum%cn)==0)
        {
            ll count=0,pc=0;
            sum=sum/cn;
            for(auto a=v.begin();a!=v.end();a++)
            {
                count+=sum-*a;
                if(*a-sum>0)pc+=*a-sum;
            }
            if(!count)cout<<pc<<"\n";
            else cout<<-1<<"\n";
            pc=0;count=0;
        }
        else cout<<-1<<"\n";
    cin>>n;
    }
}
