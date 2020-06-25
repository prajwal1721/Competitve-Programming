#include <bits/stdc++.h>
using namespace std;
int data[1025250]={0};
void fail(string pat)
{
    int j=0;
    data[0]=0;

    for(int i=1;i<pat.length();i++)
    {
        if(pat[j]==pat[i]){data[i]=j+1;j++;}
        else 
        {
            // if()
            while(j>0 && pat[j]!=pat[i])j=data[j-1];
            if(j==0)data[i]=0;
            else data[i]=j+1;
        }
        // cout<<i<<" ";
    }
}
int main()
{
    string s,pat;cin>>s>>pat;
    // cout<<"d\n";
    fail(pat);
    int j=0;
    for(int i=0;i<s.length() && j<pat.length();)
    {
        if(s[i]==pat[j])
        {
            j++;i++;
        }
        else if(j==0)
            i++;
        else 
        {
            j=data[j-1];
            // i++;
        }
        // cout<<i<<" "<<j<<"\n";
    }
    for(int i=0;i<pat.length();i++)
        cout<<data[i]<<" ";cout<<"\n";
    if(j==pat.length())cout<<"Yes\n";
    else cout<<"No\n"; 
}