#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n,time,t;
    ll ct;
    vector<ll> v;
    cin>>n>>time;
    while(n--)
    {
        cin>>t;
        v.push_back(t);
    }
    auto it=v.begin(),pp=v.begin();
    ll count=0,max=0;
    ll pre_count=count;
    ct=time;
    // pp=it;
    for(auto i:v)
        cout<<i<<" ";
    do
    {
        count=0;
        while(pp!=v.end()&& ct);
        {
            if(*pp>ct)break;
            ct-=*pp;
            count++; 
            pp++;
        }
        count=count+pre_count-1;
        pre_count=count;
        ct=ct+*it;
        it++;
        cout<<ct<<" "<<max<<"\n";
        if(count>max)max=count;
    } while (it!=v.end());
    cout<<max<<"\n";
}