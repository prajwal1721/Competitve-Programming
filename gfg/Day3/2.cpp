#include<iostream>
using namespace std;
void solve(){
    int n,arr[3];cin>>n>>arr[0]>>arr[1]>>arr[2];
    int dp[40001]={0};
    int mn=INT32_MAX;
    for(int i=0;i<3;i++)
        dp[arr[i]]=1;
        
    for(int i=0;i<=n;i++){
        for(int j=0;j<3;j++){
            if(i+arr[j]<=n && dp[i]){
                dp[i+arr[j]]=max(dp[i]+1,dp[i+arr[j]]);
            }
        }
    }
    for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    }
    // cout<<"\n";
    cout<<dp[n]<<"\n";

}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}