// THIS CODE IS WORKING FINE FOR CAPITAL LETTER CASE NEED TO CHANGE A BIT GOR MIXED CASE
// GOOD Q 
// 
#include<bits/stdc++.h>
using namespace std;
   string minWindow(string s, string t) {
        if(!t.length() && !s.length())return "";
        int t1[26]={0},f[26]={0},f2[26];
        for(int i=0;i<t.length();i++)f[t[i]-'A']++;
        int n=s.length(),st=0,ed=s.length()-1;
        for(int i=0;i<26;i++){f2[i]=-1;t1[i]=f[i];}
        int dp[n+1];
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            if(!f[s[i]-'A'])continue;
            v.push_back({s[i]-'A',i});
        }
        n=v.size();
        for(int i=n-1;i>=0;i--){
            if(f2[v[i].first]==-1)f2[v[i].first]=dp[v[i].second]=v[i].second;
            else {
                dp[v[i].second]=f2[v[i].first];
                f2[v[i].first]=v[i].second;
            }
        }
        // for(int i=0;i<n;i++)cout<<(char)(v[i].first+'A')<<" "<<v[i].second<<" "<<dp[i]<<"\n";
        for(int i=0;i<26;i++)f2[i]=0;
        for(int i=0;i<n;i++){
            if(f[v[i].first]){
                if(st==-1)
                    st=v[i].second;
                else 
                    ed=v[i].second;
                f[v[i].first]--;
                }
            }
        for(int i=0;i<26;i++){if(f[i]>0)return "";}
        int ans=ed-st+1,c_ed=ed;
        for(int i=0;i<26;i++)f2[i]=0;
        for(int i=st;i<=ed;i++)f2[s[i]-'A']++;
        for(int i=st;i<n-1;i++){
            if(ans==t.length() || st>=s.length()-t.length())break;
            // cout<<v[i].second<<" "<<st<<" "<<ed<<" "<<ans<<"\n";
            // cout<<t1[v[i].first]<<" "<<f2[v[i].first]<<":::\n";
            if(t1[v[i].first]<f2[v[i].first]){
                // cout<<"out\n";
                // cout<<ed-v[i+1].second<<"\n";
                if(ans>ed-v[i+1].second+1){
                    st=v[i+1].second;
                    ans=ed-v[i+1].second+1;
                }
                f2[v[i].first]--;
            }
            else if(dp[v[i].second]!=v[i].second){
                int p=v[i].second;
                // cout<<"in\n";
                while(p!=dp[p] && dp[p]<c_ed)p=dp[p];
                if(dp[p]>=s.length())break;
                // cout<<p<<" "<<dp[p]<<"\n";
                // if(p==dp[p]){i=n;break;}
                if(dp[p]-v[i+1].second>0 && p!=dp[p] && ans>dp[p]-v[i+1].second){
                    ed=dp[p];

                    st=v[i+1].second;
                    ans=dp[p]-v[i+1].second+1;
                }
                c_ed=dp[p];
                // if(dp[])
            }
            else break;
            // cout<<ans<<'\n';
        }
        // cout<<st<<" "<<ed<<"\n";
        // cout<<ans<<"\n";
        string s1="";
        for(int i=st;i<=ed;i++)s1+=s[i];
        return s1;
    }
int main(){
    cout<<minWindow("ABCADDDESASAA","ABCS");
}