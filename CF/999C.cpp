// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll t,n,sum=0,m=0;cin>>n>>m;
        string s;cin>>s;
        queue<ll> q[26];
        ll a[26]={0};
        for(ll i=0;i<n;i++)
        {
            if(m==0)break;
            if(a[s[i]-'a'] && q[s[i]-'a'].size()> && m){s[q[s[i]-'a'].front()]='0';m--;q[s[i]-'a'].pop();q[s[i]-'a'].push(i);}
            else {q[s[i]-'a'].push(i);a[s[i]-'a']=1;}   
        }
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')continue;
            cout<<s[i];
        }
}
        