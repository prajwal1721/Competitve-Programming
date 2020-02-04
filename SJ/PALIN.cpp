#include<iostream>
using namespace std;
int stooi(string s)
{
    int l=1,p=0,i=s.length()-1;
    while(i>=0)
    {
        p+=(s[i]-'0')*l;l*=10;i--;
    }
    return p;
}
int main()
{
    int n;cin>>n;
    while (n--)
    {
        string cs,s;
        cin>>s;cs=s;
        if(s.length()%2)
        {
            int i=0;
            while(i<s.length())
            {
                s[i]=s[s.length()-1-i];
                i++;
            }   
            int ns=stooi(s),ncs=stooi(cs);
            i=0;
            while(ns<=ncs)
            {
                if(s[s.length()/2]=='9')
                {
                    s[s.length()/2]=s[s.length()-1]='0';
                }

            }
        }
        else
        {

        }
        cout<<stooi(s);
    }    
}
