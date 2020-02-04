#include<iostream>
#include<string>
using namespace std;
int main()
{
    typedef long long ll;
    ll  n;cin>>n;string s;
    while(n--)
    {
        cin>>s;
        ll f=1;
        if(s.length()==1&& s[0]=='?')s[0]='a';
        else if(s.length()<=2)
        {
            if(s[0]=='?'&& s[1]!='a')s[0]='a';
            else if(s[0]=='?') s[0]='b';
            if(s[1]=='?')
            {
                if(s[0]=='a')s[1]='b';
                else s[1]='a';
            }
        }
        else if(s.length()>2)
        {
            if(s[1]!='a'&& s[0]=='?')s[0]='a';
            else if(s[0]=='?')(s[1]!='b')?s[0]='b':s[0]='c';
        char pre=s[0],post=s[2];
        for(ll i=1;i<s.length()-1;i++)
        {
            if(s[i]=='?' && pre!='a'&& post!='a')s[i]='a';
            else if(s[i]=='?' && pre!='b'&& post!='b')s[i]='b';
            else if(s[i]=='?' && pre!='c'&& post!='c')s[i]='c';
            else if(s[i]==pre){f=-1;break;}
            pre=s[i];post=s[i+2];
            // cout<<pre<<":"<<post<<"\n";            
            if(s[i]=='?'){f=-1;break;}
        }
        if(s[s.length()-1]=='?')
        {
            if(s[s.length()-2]!='a')s[s.length()-1]='a';
            else if(s[s.length()-2]!='b')s[s.length()-1]='b';
            else s[s.length()-1]='c';
        }
        }
        if(f!=-1)cout<<s<<"\n";
        else cout<<-1<<"\n";
        
    }
}