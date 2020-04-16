// /prajwal
//remaining
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll t,n,sum=0,m=0;cin>>n>>m;
        string s;cin>>s;
        ll a[26]={0};
        for(ll i=0;i<n;i++)
        {
            a[s[i]-'a']++;
        }
        ll remove[26]={0};
        for(ll i=0;i<26 && m;i++)
        {
            while(m&&a[i]){remove[i]++;m--;a[i]--;}
        }
        for(ll i=0;i<s.length();i++)
        {
            if(remove[s[i]-'a']>0){remove[s[i]-'a']--;}
            else cout<<s[i];
        }
        cout<<"\n";
}
        