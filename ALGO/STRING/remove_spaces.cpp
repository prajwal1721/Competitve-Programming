#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;getline(cin,s);
    int j=0;
    cout<<s<<" "; 
    for(int i=0;i<s.length();i++)
    {
        // cout<<s[i]<<" ";
        if(s[i]==' ')continue;
        s[j]=s[i];
        j++;
    }
    while(j<s.length())s[j++]=' ';
    cout<<"\n"<<s<<" ";
}