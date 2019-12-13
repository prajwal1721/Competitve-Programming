#include<iostream>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    typedef long long ll ;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll p=0,n=s.length();
        stack <char> stk;
        stk.push(s[p++]);
        ll up=0,down=0,right=0,left=0;
        if(n>0)
        {
            if(s[0]=='U')
                up++;
            else if(s[0]=='D')
                down++;
            else if(s[0]=='R')
                right++;
            else 
                left++;
        }
        if(right==left || down==up)

                if(s[p]=='U'||s[p]=='R')
                stk.push(s[p]);
                else
                stk.pop();
                if(stk.empty()){p++;break;}
            }
            else
            {
                if(s[p]=='D'||s[p]=='L')
                stk.push(s[p]);
                else
                stk.pop();
                if(stk.empty()){p++;break;}
            }
            p++;
        }while(p<s.length());
        cout<<p<<'\n';
        for(ll i=0;i<p;i++)cout<<s[i];
        cout<<'\n';
    }
}