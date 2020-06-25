#include <bits/stdc++.h>
using namespace std;
void print(string s,int start,int end)
{
    for(int i=start;i<end;i++)cout<<s[i];cout<<"\n";
}
void checkPalin(string s,int st,int ed)
{
    int t[s.length()][s.length()]={0};
    for(int i=0;i<s.length();i++)t[i][i]=1;
    int start=0,m_len=1;
    for(int i=1;i<s.length();i++)
        if(s[i-1]==s[i]){t[i-1][i]=1;start=i;m_len=2;}
    for(int k=3;k<=s.length();k++)
    {
        for(int i=0;i<s.length();i++)
        {
            int j=i+k-1;
            if(t[i+1][j-1] && s[i]==s[j]){
                t[i][j]=1;
                m_len=k;
                start=i;
        }
        }
    }
    print(s,start,start+m_len);
}
int main()
{
    string s;cin>>s;
    checkPalin(s,0,s.length()-1);
}