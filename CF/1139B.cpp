#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,t;
    vector<ll>v,s;
    cin>>n;
    while (n--)
    {
        cin>>t;v.push_back(t);
    }
    auto p=s.begin();
    ll pre=*(v.end()-1)+1,choc=0;
    for(auto i=v.rbegin();i!=v.rend();i++)
    {
        if(*i<pre)
        {choc+=*i;pre=*i;}
        else
        {choc+=(pre-1>0)?pre-1:0;pre=(pre-1>0)?pre-1:0;}
    }
    cout<<choc<<"\n";
}