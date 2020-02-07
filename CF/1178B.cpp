#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    string s;cin>>s;ll n=s.length();
    ll vp=0,vn=0,o=0,i=0,ans=0;
    while(s[i++]!='v');
    ll st=i-1;
    for(--i;i<n;i++)
    {
        if(s[i]=='v')vn++;
        else o++;
    }
    for(i=st;i<n;i++)
    {
        if(s[i]=='v')vp++;
        if(s[i]=='o' && vp!=1 && vn-vp>1)
        {
            ans+=ceil((float)vp/2)*ceil((float)(vn-vp)/2);
            vp=vp/2;
        }
    }
    cout<<ans<<"\n";
}