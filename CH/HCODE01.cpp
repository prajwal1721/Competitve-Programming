#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    string s,c1;cin>>s;
    ll p;
    if(s.length()>=2)
    p=(s[s.length()-2]-'0')*10+s[s.length()-1]-'0';
    else
    p=s[s.length()-1]-'0';
        // cout<<p<<" ";
    if(p%4==0) cout<<s<<"\n";
    else if(p%4==1) cout<<1<<"\n";
    else if(p%4==2) 
    {
        s[s.length()-1]=(char)('0'+(1+s[s.length()-1]-'0'));
        cout<<s<<"\n";
    }
    else if(p%4==3) cout<<0<<"\n";
    // cout<<p<<"\n";
}
