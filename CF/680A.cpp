#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll t,n=5;
    vector<ll> v;
    while(n--)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll sum=0;
    ll a1,a2,temp;
    ll count=0;

    for(auto dd=v.begin();dd<v.end();dd++)
        sum+=*dd;
        temp=0;
    for(auto d=v.begin();d<v.end();d++)
    {
        count=0;
        for(auto dd=v.begin();dd<v.end();dd++)
        {
            if(*d==*dd && *dd!=-1)
            {
                count++;
            }
        }
            if (count>=3)
            {
                // cout<<*d<<" "<<count;
                for(auto dd=v.begin();dd<v.end();dd++)
                {
                    if(*d!=*dd)
                       temp+=*dd;          
                }
                temp+=(count-3)*(*d);
                if(sum>temp)
                    sum=temp;

            }
    }
    // cout<<temp<<" ";
    temp=0;
    for(auto d=v.begin();d<v.end();d++)
    {
        count=0;
        for(auto dd=v.begin();dd<v.end();dd++)
        {
            if(*d==*dd)
            {
                count++;
            }
        }
            // cout<<*d;
            if (count==2)
            {
                for(auto dd=v.begin();dd<v.end();dd++)
                {
                    if(*d!=*dd)
                       temp+=*dd;          
                }
                if(sum>temp)
                    sum=temp;
            }
        }
    // cout<<temp<<" ";

    cout<<sum<<"\n";
}