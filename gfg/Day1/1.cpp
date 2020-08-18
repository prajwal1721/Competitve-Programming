#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n,W,t;cin>>n>>W;
    vector<int> value,weight;
    for(int i=0;i<n;i++){cin>>t;value.push_back(t);}
    for(int i=0;i<n;i++){cin>>t;weight.push_back(t);}
    int dp[1003]={0};
    for(int j=0;j<n;j++){
        for(int i=W;i>=1;i--){
            if(i-weight[j]>0 && dp[i-weight[j]]!=0){
                dp[i]=max(dp[i],dp[i-weight[j]]+value[j]);
            }
            else if(i==weight[j]){
                dp[i]=max(value[j],dp[i]);
            }
            
        }
    }
    for(int i=1;i<=W;i++)
            dp[i]=max(dp[i-1],dp[i]);
    cout<<dp[W]<<"\n";
}
int main(){ 
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}