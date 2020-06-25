#include <bits/stdc++.h>
using namespace std;
int  main()
{
    string s;cin>>s;
    int f=0,st=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')st++;
        else if(st!=0 && s[i]==')')st--;
        else if(s[i]==')'){f=1;break;}
    }
    // cout<<st<<" "<<f<<"\n";
    if(f || (st!=0))cout<<"Invalid\n";
    else cout<<"Valid\n";
}