#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll max=0,t;
        for(ll i=0;i<s.length();)
        {
            t=0;
            if(s[i]=='A')
            {
                i++;
                while(s[i]!='A' && i<s.length())
                {
                    t++;
                    i++;
                }
            }
            else
            i++;
            if(max<t)max=t;
        }
        cout<<max<<"\n";
    }
}