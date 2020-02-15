// https://www.hackerrank.com/challenges/gem-stones/problem?h_r=profile%E2%80%8E
#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
int main()
{
    ll n,cn;cin>>n;cn=n;
    ll a[n][26];
    memset(a,0,26);
    ll j=0;
    while (cn--)
    {
        string s;
        cin>>s;
        for(ll i=0;i<s.length();i++)
        {
            a[j][s[i]-'a']++;
        }
        j++;
    }
    ll count=0;
    for(ll i=0;i<26;i++)
    {
        ll temp=INT64_MAX;
        for(int k=0;k<n;k++)
            temp=min(temp,a[k][i]);
        count+=temp;
    }
    cout<<count<<"\n";
}
