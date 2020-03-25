#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll q;cin>>q;
    while (q--)
    {
        ll a,b,n,c;cin>>n>>a>>b>>c;
        string s;cin>>s;
        ll R=0,S=0,P=0;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='R')R++;
            if(s[i]=='S')S++;
            if(s[i]=='P')P++;
        }
        ll ch=0;
        ch=min(a,S)+min(c,P)+min(b,R);
        string ans="";
        if(2*ch>=n)
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
                if(s[i]=='R' && b){ans+='P';b--;}
                else if(s[i]=='P' && c){ans+='S';c--;}
                else if(s[i]=='S' && a){ans+='R';a--;}
                else ans+='-';
                // cout<<a<<" "<<b<<" "<<c<<"\n";
            }
            // cout<<ans<<"\n";
            for(int i=0;i<n;i++)
            {
                if(ans[i]!='-')continue;
                if (a>0){ans[i]='R';a--;}
                else if(b>0){ans[i]='P';b--;}
                else if(c>0){ans[i]='S';c--;}
            // cout<<a<<" "<<b<<" "<<c<<"\n";
            }
            cout<<ans<<"\n";
        }
        else cout<<"NO\n";
    }
    
}