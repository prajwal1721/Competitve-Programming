#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    string s;
    cin>>s;
    ll i=0,f=1,n=s.length();
    while(i<n)
    {
        if(s[i]=='1')
        {
            i++;
            if(s[i]=='1' && i<n) continue;
            else if(s[i]=='4' && i<n)
            {
                i++;
                if(s[i]=='4' && i<n)i++;
                else if(s[i]==1) continue;
                else continue;
            }
            else continue;
        }
        else
        {
                f=0;
                break;
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
}