#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(s.length()!=1 && s[0]!='0')
    {
        map<string,ll> m;
        string temp="";
        for(ll i=0;i<s.length();i++)temp+=s[i]+'A'-'1';
        ll ans=1;m[temp]++;
        temp="";
        for(ll i=0;i<s.length()-1;i++)
        {
            if(s[i]-'0'<1 && s[i+1]-'0'<=9 || s[i]-'0'==2 && s[i]-'0'<=6)
                ans+=s.length()
        }
    }
}