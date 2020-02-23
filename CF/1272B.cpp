#include<iostream>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    typedef long long ll ;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll p=0,n=s.length();
        ll x=0,y=0,u=0,d=0,l=0,r=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='U'){y++;u++;}
            else if(s[i]=='D'){y--;d++;}
            else if(s[i]=='L'){x--;l++;}
            else if(s[i]=='R'){x++;r++;}
        }
            l=r=min(l,r);
            u=d=min(u,d);
        string ans="";
        ll i=0;
        if(l && u || r&& d  )
        {
            while( u){ans+='U';u--;}
            while( l){ans+='L';l--;}
            while( d){ans+='D';d--;}
            while( r){ans+='R';r--;}
        }
        else
        {
            if(!u && !r)ans="";
            else if(!u)
            {
                ans="RL";
            }
            else 
            {
                ans="UD";
            }
        }
        cout<<ans.length()<<"\n"<<ans<<"\n";
    }
}