#include<iostream>
#include<set>
#include<string>
using namespace std;
void solve()
{
    int n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    int mx=0,cnt=0;
    set<string> s;
    for(int i=0;i<n;i++){
        string t="";
        t+=s1[i];
        // cout<<t<<" ";
        s.insert(t);
        for(int j=i+1;j<n;j++)
        {
            t+=s1[j];
            // cout<<t<<" ";
            s.insert(t);
        }
        // cout<<"\n";
    }
    for(int i=0;i<m;i++){
        string t="";
        t+=s2[i];
        if(s.find(t)!=s.end())
            mx=max(mx,(int)t.length());
        for(int j=i+1;j<m;j++)
        {
            t+=s2[j];
            if(s.find(t)!=s.end())
                mx=max(mx,(int)t.length());
        }
    }
    cout<<mx<<"\n";
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}
