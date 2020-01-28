#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,d,f,count=0,max=0;
    cin>>n>>d;
    while(d--)
    {
        string s;
        cin>>s;
        f=1;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                {
                    f=0;break;
                }
        }
        if(f==0)   count++;    
        else 
        {if(max<count)
        {
            max=count;
        }    count=0;
        }
    }
    if(count>max) max=count;
    cout<<max<<"\n";
}