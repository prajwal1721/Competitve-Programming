#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,t,i=1;
    map<ll,ll>m;
    cin>>n>>k;
    while(n--)
    {
        cin>>t;
        if(m.find(t)==m.end()) m[t]=i;
        i++;
    }   
    if(m.size()>=k)
    {
        cout<<"YES\n";i=0;
        for(auto a=m.begin();a!=m.end() && i!=k;a++)
            {cout<<a->second<<" ";i++;}
        cout<<"\n";
    }
    else
        cout<<"NO\n";
}