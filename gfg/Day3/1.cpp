#include<iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    int dp[105]={0};
    dp[0]=1;
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=3;j++){
            if(dp[i])
                dp[i+j]+=dp[i];
        }
    }
    cout<<dp[n]<<"\n";
}
int main(){
    int t;cin>>t;
    while (t-- )
    {
        solve();
        /* code */
    }
    
}