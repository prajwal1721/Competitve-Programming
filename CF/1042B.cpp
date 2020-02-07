#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    string s;
    ll n,count=0,t;cin>>n;
    ll a=-1,b=-1,c=-1,ab=-1,bc=-1,ca=-1,abc=-1;
    while(n--)
    {
        char c;
        cin>>t>>s;
        cout<<t<<"::"<<s<<"\n";
        if(s.length()==1)
        {
            if(s[0]=='A'&& a>t ||a==-1)a=t;
            else if(s[0]=='B'&& b>t ||b==-1)b=t;
            else if(s[0]=='C'&& c>t ||c==-1)c=t;
        }
        else if(s.length()==2)
        {
            if(s[0]=='A'&& s[1]=='B'||s[1]=='A'&& s[0]=='B' && ab>t || ab==-1)ab=t;
            else if(s[0]=='C'&& s[1]=='A'||s[1]=='C'&& s[0]=='A' && ca>t || ca==-1)ca=t;
            else if(s[0]=='C'&& s[1]=='B'||s[1]=='C'&& s[0]=='B' && bc>t || bc==-1)bc=t;
        }
        else 
        {
            if(abc>t || abc==-1 )abc=t;
        }
    }
    cout<<a<<":"<<b<<":"<<c<<":"<<ab<<":"<<bc<<":"<<ca<<":"<<abc<<"\n";
        ll ans=-1;
        if(a!=-1 && b!=-1 && c!=-1)ans=a+b+c;
        else if(ab!=-1 && c!=-1)ans=min(ans,ab+c);
        else if(bc!=-1 && a!=-1)ans=min(ans,bc+a);
        else if(ca!=-1 && b!=-1)ans=min(ans,ca+b);
        else if(abc!=-1)ans=min(ans,abc);
        cout<<ans<<"\n";
}