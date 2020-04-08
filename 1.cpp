#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,p=1;cin>>n;
    while(n--)
    {string s;
        cin>>s;
        ll a[10]={0};
        for(ll i=0;i<s.length();i++)
            a[s[i]-'0']=1;
        string a1="",b1="";
        ll cur=0;
        for(ll i=0;i<s.length();i++)
        {
            cur=cur+s[i]-'0';
            
            if(cur==0 && a[0]){cur=10;}
            for(ll j=9;j>0;j--)
                {
                    if(j==cur)continue;
                    if(a[j]!=1 &&cur-j>0 && a[cur-j]!=1 ){a1+=to_string(j);b1+=to_string(cur-j);cur=0;break;}
                }
            ll j1=0,j2=0,mx=INT32_MAX;
            if(cur)
            {for(ll j=9;j>0;j--)
                {
                    if(j==cur)continue;
                   for(ll jj=9;jj>0;jj--)
                    {
                    if(j==cur)continue;
                    if(a[j]!=1 && a[jj]!=1 ){
                        if(cur-j-jj >0&&mx>cur-j-jj){j1=j;j2=jj;mx=cur-j-jj;}
                    }
                }
                }    
            a1+=to_string(j1);b1+=to_string(j2);
            }
        }
        cout<<"Case #"<<p<<": "<<a1<<" "<<b1<<"\n";   p++;
    }
}