#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int t,n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;v.push_back(t);
    }
    int target;cin>>target;
    int dp[target+1]={0};
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=target;j++){
            if(j-v[i]>=0 && dp[j-v[i]])
                dp[j]+=dp[j-v[i]];
        }
    }
    cout<<dp[target]<<"\n";
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}