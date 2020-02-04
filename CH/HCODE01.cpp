#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    string s;cin>>s;
    ll n;
    if(s.length()>=2)
    n=(s[s.length()-2]-'0')*10+(s[s.length()-1]-'0');
    else 
    n=(s[s.length()-1]-'0');
    ll p=n-((ll)n/4)*4;
    if(p==0) p=n;
    else if(p==1) p=1;
    else if(p==2) p=n+1;
    else if(p==3) p=0;
    cout<<p<<"\n";
}
