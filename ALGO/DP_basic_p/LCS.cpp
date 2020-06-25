#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s1,s2;cin>>s1>>s2;
    ll dp[s1.length()+1][s2.length()+1]={0};
    for(int i=0;i<=s1.length();i++)
    {
        for(int j=0;j<=s2.length();j++)
        {
            dp[i][j]=0;
            if(i==0 || j==0)continue;
            if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            // cout<<dp[i][j]<<" ";
        }
        // cout<<"\n";
    }
    cout<<dp[s1.length()][s2.length()]<<"\n";
    string lcs="";
    ll i=s1.length(),j=s2.length();
    while(i!=0 && j!=0)
        {
            if(s1[i-1]==s2[j-1]){lcs+=s1[i-1];i--;j--;}
            else
            {
                if(dp[i][j-1]>dp[i-1][j])
                    j--;
                else 
                    i--;
            }
        }
    reverse(lcs.begin(),lcs.end());
    cout<<lcs<<"\n";

}