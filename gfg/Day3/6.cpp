#include<bits/stdc++.h>
#include<vector>

using namespace std;
void solve()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int dp[n+1][n+1]={0};
    int dp2[n+1][n+1]={0};
    for(int i=0;i<n;i++)
    {
        dp[i][i]=arr[i];
        dp2[i][i]=0;
        if(i+1<n)
            {
                dp[i][i+1]=max(arr[i],arr[i+1]);
                dp2[i][i+1]=min(arr[i],arr[i+1]);
            }
    }
    cout<<"\n";
    for(int i=n-1;i>=0;i--){
        for(int j=i+2;j<n;j++){
            dp[i][j]=max((j-1>=0?dp2[i][j-1]:0)+arr[j],(i+1<n?dp2[i+1][j]:0)+arr[i]);
            if(dp[i][j]==(j-1>=0?dp2[i][j-1]:0)+arr[j])
                dp2[i][j]=(dp[i][j-1]);
            else
                dp2[i][j]=(dp[i+1][j]) ;
            // cout<<i<<" "<<j<<" " <<(j-1>=0?dp[i][j-1]:0)<<" "<<(i+1<n?dp[i+1][j]:0)<<"\n";
        }
    }
/*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<dp[i][j]<<" ";
            cout<<"\n";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<dp2[i][j]<<" ";
            cout<<"\n";
    }
  */  
    cout<<dp[0][n-1]<<"\n";
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}