#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n; cin>>n;
    while(n!=0)
    {
        string s;
        cin>>s;;
        ll i=0,c=0,st=0,len=s.length();n=n*2-1;i=n;
        cout<<s[0];
        while(c!=len )
        {
            if(i>=len){;i=len%((n+1)/2);}
            if(s[i]!='x')
            cout<<s[i]  ;
            c++;
            if(i+1>=len){st++;i=st;}
            if(c!=len)cout<<s[i+1];
            i+=n;
        }
        cout<<"\n";
        cin>>n;
    }
}