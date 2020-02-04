#include<iostream>
#include<string>
#include<algorithm>
#define si(x) x-'0'
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        string s;
        cin>>n>>s;
        ll sum=0;
        ll i=n-1,f=1;
        while(i>=0 )
        {
            if((s[i]-'0')%2!=0){f=0;break;}
            i--;
        }
        if(f==1){cout<<"qq-1\n";continue;}
        n=i+1;
        string ans="";
        for( i=n-1;i>=0;i--)
            {
                sum+=(s[i]-'0');
            }
        if(sum%2)
        {
            f=1;
            for(i=n-1;i>=0;i--)
            {
                if((s[i]-'0')%2 && f){f=0;}
                else ans+=s[i]; 
            }
            reverse(ans.begin(),ans.end());
            if(f==0)
            cout<<ans<<"\n";
            else
            cout<<-1<<"\n";
        }
        else
        {
            for(i=0;i<n;i++)
                ans+=s[i];
            cout<<ans<<"\n";
        }
    }
}