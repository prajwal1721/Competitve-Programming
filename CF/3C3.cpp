#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    stack <char> stk;
    string  s;
    cin>>s;
    typedef long long ll;
    ll p=0,no=0,f=1,count=0,max=0,com=0;
    while(p<s.length())
    {
        if(s[p]=='(')
        {
            com=0;
            if(f) {f=0;}
            stk.push(s[p]);
        }
        else if(s[p]==')'  && !stk.empty())
        {
            stk.pop();
            count++;
        }
        else if(stk.empty())
        {
            if(max<count) max=count;
                count=0;
                if(f==0)
                {
                    com=1;
                    no++;
                    f=1;
                }
        }
        p++;
        if(max<count) max=count;
    }
    if(stk.empty() && p==s.length() && com ) no++;
    // else if(!stk.empty()) no++;
    if(max==0) no=1;
    cout<<max*2<<" "<<no<<"\n";
}