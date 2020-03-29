#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        string s;cin>>s;
        ll p[s.length()+1]={0};
        ll flag=0,n=s.length();
        if(n<2)cout<<s<<"\n";
        else
        {
            for(ll i=1;i<n;i++)
            {

                if(s[i]==s[i-1])
                {
                    ll j=i+1;
                    while (s[j]==s[i])
                    {s[j]='0';j++;}
                    i=j;
                }
            }
            string ans="";
            for(ll i=0;i<n;i++)
                if(s[i]!='0')ans+=s[i];
            s=ans;
            ll p[n+1]={0};n=s.length();
            for(ll i=n-1;i>0;i--)
            {
                if(s[i]==s[i-1]){p[i-1]=1;}
            }
            for(ll i=n-1;i>1;i--)
            {
                if(p[i]==p[i-2] && p[i]==1)p[i-2]=2;
            }
            ll flag=0;
            for(ll i=0;i<n;i++)
            {
                // cout<<p[i]<<" "<<s[i]<<"\n";
                if(p[i]==2){s[i]='0';flag=0;}
                // else if(!flag && p[i]==)flag=1;
            }

            ans="";
            for(ll i=0;i<n;i++)
                if(s[i]!='0')ans+=s[i];
            s=ans;
            cout<<s<<"\n";
        }   
}
        