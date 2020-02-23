#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    typedef long long ll;
    ll n,k,mx=0;cin>>n>>k;
    string s;cin>>s;
    int a[200001];a[0]=1;
    map<char,ll> m;
    if(k==1)
    m[s[0]]++;
    for(ll i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])a[i]=a[i-1]+1;
        else a[i]=1;
        if(a[i]%k==0 )m[s[i]]+=k;//cout<<m[s[i]]<<" ";}
    }
    for(auto j=m.begin();j!=m.end();j++)
    {
        // cout<<j->first<<":"<<j->second<<"\n";
        if(mx<(*j).second)mx=(*j).second;
    }
    if(s.size()==1)mx=1;
    else mx/=k;
    cout<<mx<<"\n";
}