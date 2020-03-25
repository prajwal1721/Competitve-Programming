#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
        ll n;cin>>n;
        while (n--)
        {
            string s;
            cin>>s;
            s='R'+s;
            s=s+'R';
            // cout<<s<<" ";
            int diff=0,pre=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='R'){diff=max(diff,i-pre);pre=i;}
            }
            cout<<diff<<"\n";
    
        }
        
}
