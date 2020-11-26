#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2;cin>>s1>>s2;
    int l1=s1.length(),l2=s2.length();
    int dp1[l1+2][l2+2],dp2[l1+2][l2+2];
    for(int i=0;i<=l1+1;i++)dp2[i][0]=dp1[i][0]=dp2[i][l2+1]=dp1[i][l2+1]=0;
    for(int i=0;i<=l2+1;i++)dp2[0][i]=dp1[0][i]=dp2[l1+1][i]=dp1[l1+1][i]=0;
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            // dp1[i][j]=max(dp1[i-1][j],dp1[i][j-1]);
            if(s1[i-1]==s2[l2-j])dp1[i][j]=dp1[i-1][j-1]+1;
            else dp1[i][j]=0;
        }
    }

    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            if(s1[l1-i]==s2[j-1])dp2[i][j]=dp2[i-1][j-1]+1;
            else dp2[i][j]=0;
        }
    }
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            dp2[i][j]=max({dp2[i][j],dp2[i-1][j],dp2[i][j-1]});
            dp1[i][j]=max({dp1[i][j],dp1[i-1][j],dp1[i][j-1]});
        }
    }
    /*

    for(int i=0;i<=l1+1;i++){
        for(int j=0;j<=l2+1;j++)
            cout<<dp1[i][j]<<" ";
        cout<<"\n";
    }
        cout<<"\n";

    for(int i=0;i<=l1+1;i++){
        for(int j=0;j<=l2+1;j++)
            cout<<dp2[i][j]<<" ";
        cout<<"\n";
    }
        cout<<"\n";
    */
    int ans=0;
    for(int i=0;i<=l1;i++){
        for(int j=0;j<=l2;j++){
            ans=max(ans,dp1[i][j]+dp2[l2][l1]-dp2[i][j]);
        }
    }

    cout<<ans*2<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}