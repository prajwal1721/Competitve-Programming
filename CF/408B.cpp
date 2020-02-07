#include<iostream>
#include<string>
using namespace std;
int main()
{
    typedef long long ll;
    ll ans=0;
    ll a[26]={0},b[26]={0};
    string s1,s2;
    cin>>s1>>s2;
    for(ll i=0;i<s1.length();i++)
        a[s1[i]-'a']++;
    for(ll i=0;i<s2.length();i++)
        b[s2[i]-'a']++;
        ll f=1;
    for(ll i=0;i<26;i++)
        {
            // cout<<a[i]<<"::"<<b[i]<<":\\"<<(char)(i+'a')<<"\n";
            ans+=( a[i]>0)?min(b[i],a[i]):0;
            if(a[i]==0 && b[i]>0){f=0;break;}
        }
        if(f)cout<<ans<<"\n";
        else cout<<-1<<"\n";
}