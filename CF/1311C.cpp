#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    typedef long long ll;
    ll q;cin>>q;
    while (q--)
    {
        string s;
        ll ans[26]={0};
        ll n,t,a,y;cin>>n>>a>>s;
        vector <ll >v;t=a;ll b[n+1]={0};b[n+1]=0;
        while (t--)
        {cin>>y;v.push_back(--y);}
        for(auto i=s.rbegin();i!=s.rend();i++)
            ans[*i-'a']++;
        for(auto i=v.rbegin();i!=v.rend();i++)
        {
            b[*i]++;
        }
        for(int i=n-1;i>=0;i--)
        {
            b[i]+=b[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans[s[i]-'a']+=b[i];
        }
        for(int i=0;i<26;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    
}