#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int freq[267];
    for(int i=0;i<26;i++)freq[i]=-1;
    int st=0,ed=0;
    int mx_st=0,mx_ed=0;
    for(int i=0;i<s.length();i++)
    {   
        if(freq[s[i]-'A']==-1){freq[s[i]-'A']=i;ed++;}
        else if(freq[s[i]-'A']<st){freq[s[i]-'A']=i;ed++;}
        else 
        {
            st=freq[s[i]-'A'];
            freq[s[i]-'A']=i;
            ed++;
        }
        if(mx_ed-mx_st<ed-st){mx_ed=ed;mx_st=st;}
    }
    cout<<mx_st<<" "<<mx_ed<<"\n";
    for(int i=mx_st;i<mx_ed;i++)
        cout<<s[i];
    cout<<"\n";
}