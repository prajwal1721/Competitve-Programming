// constraints are not correct in gfg

#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int t,n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
        {
            cin>>t;v.push_back(t);
        }
    int dp[n+2],mx=0;
    dp[0]=v[0];mx=v[0];
    for(int i=1;i<n;i++){
        dp[i]=0;
        for(int j=i-1;j>=0;j--){
            if(v[i]>v[j]){
                dp[i]=max(dp[i],dp[j]);
            }
        }
        dp[i]+=v[i];
        mx=max(dp[i],mx);
    }
    cout<< mx<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}