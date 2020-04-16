#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll no,cnt=0;cin>>no;
    map<string,ll>mp;
    string n,s,ans="";
    while (no--)
    {
        cin>>s;
        if(s=="insert")
        {
            cin>>n;
            if(mp[n]>0)mp[n]++;
            else mp[n]=1;
            ans+=s+" "+n+"\n";cnt++;
        }
        else if(s=="getMin")
        {
            cin>>n;
            if(mp.begin()!=mp.end() && (*mp.begin()).first!=n)
            {
                for(auto it=mp.begin();it!=mp.end();it++)
                {
                    // cout<<(*it).first<<"  \n";
                    if((*it).first<n){
                            cnt++;
                            // cout<<" fff";
                            ans+="removeMin\n";(*it).second-=1;
                    }
                    else break;
                }
            }
            if(mp[n]==0)ans+="insert "+n+"\n",cnt++;
            ans+=s+" "+n+"\n";cnt++;
        }
        else if(s=="removeMin")
        {
            if(mp.empty() )cnt++,ans+="insert "+to_string(0)+"\n";
            else
            (*mp.begin()).second-=1;
            cnt++;
            ans+=s+"\n";
        }
    }
    cout<<cnt<<"\n"<<ans;
}