#include<iostream>
#include<vector>
using namespace std; 
void solve(){
    int t,n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    int dp[n]={0},mx=0;
    for(int i=0;i<n;i++)dp[i]=1;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(v[i]>v[j])
                dp[i]=max(dp[i],dp[j]+1);
        }
        mx=max(mx,dp[i]);
    }
    cout<<mx<<"\n";
}   
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}